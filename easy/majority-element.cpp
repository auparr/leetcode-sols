class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> nums_map;

        for(int num : nums) {
            nums_map[num] += 1;
        }

        int mx = 0;
        for(auto p: nums_map) {
            if (mx == 0) mx = p.first;
            if (p.second > nums_map[mx]) mx = p.first;
        }

        return mx;
    }
};
