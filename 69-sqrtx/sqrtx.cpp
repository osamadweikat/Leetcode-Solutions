class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;

        int i = 0; 
        int j = x;
        int res = 0;

        while (i <= j) {
            int mid = i + (j - i) / 2;
            long long sq = 1LL * mid * mid;

            if (sq == x) {
                return mid; 
            } else if (sq < x) {
                res = mid;       
                i = mid + 1;  
            } else {
                j = mid - 1;
            }
        }

        return res;
    }
};
