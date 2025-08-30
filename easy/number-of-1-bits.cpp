class Solution {
public:
    int hammingWeight(int n) {
        int bits = 0;

        if (n == 1) return 1;

        while(n != 1) {
            if (n % 2 == 1) {
                n = n / 2;
                bits++;
            }
            else n = n / 2;
        }

        bits++;
        return bits;
    }
};
