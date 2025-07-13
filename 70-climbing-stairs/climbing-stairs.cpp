class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2) return n;

        int step1 = 1;
        int step2 = 2;
        int total = 0;

        for(int i = 3; i <= n; i++){
            total = step1 + step2;
            step1 = step2;
            step2 = total;
        }
        return total;
    }
};