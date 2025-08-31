class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(int i = 0; i < nums.size(); i++) {
            if (val != nums[i]) {  // 3 != 3 // 3 != 2 // 3 != 2 // 3 != 3
            nums[k] = nums[i];
            k++;
            }
        }
    return k;
    }
};
