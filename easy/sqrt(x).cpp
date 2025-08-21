class Solution {
public:
    int mySqrt(int x) {
        long n = 0;
        while(true) {
            if (n*n == x) {
                return n;
            }
            if (n*n > x) {
                return n-1;
            }
            n++;
        }
        return {};
    }
};
