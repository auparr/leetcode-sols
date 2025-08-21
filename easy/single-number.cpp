class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> m;
        for(auto n : nums) {
            m[n] += 1;
        }
        for(auto i : nums) {
            if (m[i] == 1){
                return i;
            }
        }
        return {};
    }
};
