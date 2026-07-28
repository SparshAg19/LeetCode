class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }else if(x > 0){
            int t = x,n=0;
            while(t!=0){
                t = t/10;
                n++;
            }
            int arr1[n],arr2[n];
            int w = x,j=0,flag=0;
            while(w!=0){
                arr1[j] = w%10;
                w = w/10;
                j++;
            }
            for(int i=n-1;i>=0;i--){
                arr2[n-i-1] = arr1[i];
            }

            for(int k = 0;k<n;k++){
                if(arr1[k] == arr2[k]){
                    flag = 1;
                }else{
                    return false;
                }
            }

            if(flag == 1){
                return true;}
        }else if(x == 0){
            return true;
        }
    return true;}
};