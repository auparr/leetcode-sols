class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for (int i = 0; i <= nums.size()-1; i++) {
            for (int j = 0; j <= nums.size()-1; j++) {
                if (nums[i] + nums[j] == target && i != j) {
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
            if (ans.size() == 2) {
                break;
            }
        }
        return ans;
    }
};
