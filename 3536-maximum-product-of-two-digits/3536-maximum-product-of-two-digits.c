int maxProduct(int n) {
    int x = n;
    int digits = 0;
    while(x != 0){
        digits++;
        x = x/10;
    }  
    x = n;
    int arr[digits];
    for(int i = 0;i<digits;i++){
        arr[i] = x%10;
        x = x/10;
    }

    int max = 0;

    for(int i = 0;i<digits;i++){
        for(int j = i+1; j < digits;j++){
            if(arr[i]*arr[j] > max){
                max = arr[i]*arr[j];
            }
        }
    }

    return max;
}