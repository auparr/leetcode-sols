class Solution {
public:
    string sortVowels(string s) {
        string ans;
        vector<char> vowels = {'A', 'I', 'U', 'E', 'O',
                               'a', 'i', 'u', 'e', 'o'};
        vector<char> inVowels;
        int totalVow = 0;

        for (int i = 0; i < s.size(); i++) {
            if (find(vowels.begin(), vowels.end(), s[i]) != vowels.end()) {
                inVowels.push_back(s[i]);
            }
        }
        sort(inVowels.begin(), inVowels.end());

        for (int i = 0, j = 0; i < s.size(); i++) {
            if (find(vowels.begin(), vowels.end(), s[i]) != vowels.end()) {
                s[i] = inVowels[j];
                j++;
            }
        }

        return s;
    }
};
