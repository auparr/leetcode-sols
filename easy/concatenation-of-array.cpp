class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int j = 0;
        for(int i = 0; i <= nums.size() * 2; i++) {
            if(j == nums.size()) j = 0;
            else {
                ans.push_back(nums[j]);
                j++;
            }
        }
        return ans;
    }
};
