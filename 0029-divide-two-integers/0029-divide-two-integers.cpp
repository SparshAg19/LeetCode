class Solution {
public:
    int divide(int dividend, int divisor) {
        if(divisor != 0){
            if(dividend == INT_MIN && divisor == -1){
                return INT_MAX;
            }

            long long ans = (long long)dividend/divisor;
            return ans;
        }
    return 0;
    }
};