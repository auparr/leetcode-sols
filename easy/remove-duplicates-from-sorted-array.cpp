class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> m;
        int k = 1;
        int mx = nums[nums.size()-1] + 1;

        m[nums[0]] = 1;
        for (int i = 1; i < nums.size(); i++) {
            m[nums[i]] += 1;
            if(nums[i] == nums[i-1] || m[nums[i]] > 1) {
                nums[i] = mx;
            }
            else {
                k++;
            }
        }
        sort(nums.begin(), nums.end());

        return k;
    }
};
