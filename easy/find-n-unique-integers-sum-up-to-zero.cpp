class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> zero;
        if (n == 1)
            return zero= {0};

        if (n % 2 == 0) {
            for (int i = 1; i <= n / 2; i++) {
                zero.push_back(i);
                zero.push_back(i * -1);
            }

        } 
        
        else {
            zero.push_back(0);
            for (int i = 1; i <= n / 2; i++) {
                zero.push_back(i);
                zero.push_back(i * -1);
            }
        }

        return zero;
    }
};
