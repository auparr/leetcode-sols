class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> num_map;

        for (int n : nums) {
            num_map[n] += 1;
        }

        for(auto p : num_map) {
            if (p.second > 1) return true;
        }
        return false;
    }
};
