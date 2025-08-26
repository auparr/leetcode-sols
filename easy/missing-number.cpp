class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = -1;

        do {
            ans++;
        } while (find(nums.begin(), nums.end(), ans) != nums.end());
        return ans;
    }
};
