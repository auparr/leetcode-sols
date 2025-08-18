class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> ans;
        int accounts_length = accounts.size();
        for (int i = 0; i < accounts_length; i++) {
            vector<int> acc = accounts[i];
            int acc_length = acc.size();
            int sum = 0;
            for (int j = 0; j < acc_length; j++) {
                sum += acc[j];
            }
            ans.push_back(sum);
        }
        int mx = ans[0];
        for (int i = 0; i < ans.size(); i++) {
            if (mx < ans[i]) {
                mx = ans[i];
            }
        }
        return mx;
    }
};
