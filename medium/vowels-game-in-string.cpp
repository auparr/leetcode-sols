class Solution {
public:
    bool doesAliceWin(string s) {
        for(char ch : s){
            if(ch == 'a' || ch == 'i' || ch == 'u' || ch == 'e' || ch =='o') {
                return true;
            }
        }
        return false;
    }
};
