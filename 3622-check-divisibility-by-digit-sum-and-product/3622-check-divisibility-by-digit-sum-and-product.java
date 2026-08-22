class Solution {
    public boolean checkDivisibility(int n) {
        int count = 0;
        int t = n;
        while (t != 0) {
            t = t / 10;
            count++;
        }
        t = n;
        int[] arr = new int[count];
        int dig = 0;
        while(t != 0){
            arr[dig++] = t%10;
            t /= 10;
        }

        t = n;
        int sum = 0;
        int product = 1;
        while(t != 0){
           int digit = t%10;
            sum += digit;
            product *= digit;

            t = t/10;
        }

        if(n % (sum + product) == 0){
            return true;}
        else{
            return false;}
    }
}