class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        vector<int> shorter, longer;
        if (nums1.size() <= nums2.size()) {
            shorter = nums1;
            longer  = nums2;
        } else {
            shorter = nums2;
            longer  = nums1;
        }


        for (int x : shorter) {
            if (find(longer.begin(), longer.end(), x) != longer.end()) {
                if (find(ans.begin(), ans.end(), x) == ans.end()) {
                    ans.push_back(x);
                }
            }
        }
        return ans;
    }
};
