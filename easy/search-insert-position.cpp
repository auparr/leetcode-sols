class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans;

        if(find(nums.begin(), nums.end(), target) == nums.end()) {
            for (int i = 0 ; i < nums.size() ; i++) {
                if (nums[i] > target) return i;
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) return i;
        }
        return nums.size();
    }
};
