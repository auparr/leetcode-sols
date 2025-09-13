class Solution {
public:
    int maxFreqSum(string s) {
     map<char, int> cons;
     map<char, int> vows;
     int maxV = 0;
     int maxC = 0;

     for(char ch : s) {
        if (ch == 'a' || ch == 'i' || ch == 'u' || ch == 'e' || ch == 'o'){
        vows[ch]++;
        }
        else {
        cons[ch]++;
        }
     }   

     for(auto p : vows) {
        if(maxV < p.second) {
            maxV = p.second;
        }
     }

     for(auto p : cons) {
        if(maxC < p.second) {
            maxC = p.second;
        }
     }

     return maxV + maxC;
    }
};
