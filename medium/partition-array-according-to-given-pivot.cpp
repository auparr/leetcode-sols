class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less;
        vector<int> greater;
        vector<int> p;
        vector<int> ans;

        for(int n : nums) {
            if (n < pivot) less.push_back(n);
            else if (n > pivot) greater.push_back(n);
            else p.push_back(n);
        }

        for(int n : less) {
            ans.push_back(n);
        }
        for(int n : p) {
            ans.push_back(n);
        }
        for(int n : greater) {
            ans.push_back(n);
        }

        return ans;

    }
};
