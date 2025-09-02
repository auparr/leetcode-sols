class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        int i = words.size();
        int j = 0;
        while (i > 0) {
            if(find(words[j].begin(), words[j].end(), x) != words[j].end()) {
                ans.push_back(j);
            }
            j++;
            i--;
        }
        return ans;
    }
};
