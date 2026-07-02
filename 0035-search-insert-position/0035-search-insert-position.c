int searchInsert(int* nums, int numsSize, int target) {
    for(int i = 0;i<numsSize;i++){
        if(nums[i] == target){
            return i;
        }
    }

    int max = nums[0];
    for(int i = 0;i<numsSize;i++){
        if(nums[i] > max){
            max = nums[i];
        }
    }

    if(target > max){
        return numsSize;
    }else{
        int i = 0;
        while(target > nums[i]){
            i++;
        }
        return i;
    }
    return 0;
}