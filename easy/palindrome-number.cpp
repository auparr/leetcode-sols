class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int len = s.size();
        if (x < 0) {
            return false;
        }
        for (int i = 0; i < len-1; i++ ) {
            if (!(s[i] == s[len-1-i])) {
                return false;
            }
        }
        return true;
    }
};
