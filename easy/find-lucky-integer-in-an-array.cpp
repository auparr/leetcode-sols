class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> lucks;
        for(int n : arr) {
            lucks[n]++;
        }

        int luckyNumber = 0;
        int mx = 0;
        for(auto p : lucks) {
            if (p.first == p.second) {
                luckyNumber = p.first;
            }
            if(mx < luckyNumber) {
                mx = luckyNumber;
            }
        }
        if(mx) return mx;
        else return -1;
    }
};
