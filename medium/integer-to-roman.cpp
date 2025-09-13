class Solution {
public:
    string intToRoman(int num) {
        int thousand = (num/1000) * 1000;
        int hundred = (num / 100) % 10 * 100;
        int dozen = (num / 10) % 10 * 10;
        int unit = num % 10 ;
        string ans;

        for(int i = 0; i < thousand; i += 1000){
            ans.push_back('M');
        }

        for(int i = 0; i < hundred; i += 100){
            cout << hundred << endl;
            if(hundred >= 900){
                ans.push_back('C');
                ans.push_back('M');
                break;
            }
            else if(hundred >= 500 && i < 500){
                i += 400;
                ans.push_back('D');
            }
            else if(hundred >= 400 && i < 400) {
                i += 300;
                ans.push_back('C');
                ans.push_back('D');
            }
            else {
                ans.push_back('C');
            }
            
        }

        for(int i = 0; i < dozen; i += 10) {
            if(dozen >= 90 && i < 90) {
                i += 80;
                ans.push_back('X');
                ans.push_back('C');
            }
            else if(dozen >= 50 && i < 50) {
                i += 40;
                ans.push_back('L');
            }
            else if(dozen >= 40 && i < 40) {
                i += 30;
                ans.push_back('X');
                ans.push_back('L');
            }
            else {
                ans.push_back('X');
            }
        }

        for(int i = 0; i < unit; i++) {
            if(unit == 9){
                ans.push_back('I');
                ans.push_back('X');
                break;
            }
            else if(unit >= 5 && i < 5){
                i += 4;
                ans.push_back('V');
            }
            else if(unit >= 4 && i < 4){
                i += 3;
                ans.push_back('I');
                ans.push_back('V');
            }
            else {
                ans.push_back('I');
            }
        }

        return ans;

    }
};
