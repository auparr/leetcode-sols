class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());

        int ans = 0;
        int first = coins;
        bool isValid = first > costs[0];
        for(int i = 0; i < costs.size(); i++) {
            if(isValid && coins >= costs[i]){
                coins -= costs[i]; 
                ans++;
            }
        }

        return ans;
    }
};
