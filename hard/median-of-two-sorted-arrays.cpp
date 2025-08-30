class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;

        int i = 0;
        for(int n : nums1) {
            nums.push_back(n);
        }
        for(int n : nums2) {
            nums.push_back(n);
        }

        sort(nums.begin(), nums.end());
        int len = nums.size();

        // cout << len;
        float m = 0;
        // for(auto n: nums) {
        //     cout << n << endl;
        // }
        if (len % 2 == 0) {
            m = (nums[len/2] + nums[len/2-1]) / 2.0;
        }
        else {
            m = nums[len/2];
        }

        return m;
    }
};
