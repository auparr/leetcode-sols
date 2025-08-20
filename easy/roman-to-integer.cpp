class Solution {
public:
    int romanToInt(string s) {
        map<char, int> romanValue;
        romanValue['I'] = 1;
        romanValue['V'] = 5;
        romanValue['X'] = 10;
        romanValue['L'] = 50;
        romanValue['C'] = 100;
        romanValue['D'] = 500;
        romanValue['M'] = 1000;
        int total = 0;
        int c_val = 0;

        for(char c : s) {
            if (c_val < romanValue[c] && c_val != 0) {
                total += romanValue[c] - c_val * 2 ;
                continue;
            }
        total += romanValue[c];
        c_val = romanValue[c];
        }
        return total;
    }
};
