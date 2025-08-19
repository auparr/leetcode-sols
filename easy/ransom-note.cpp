class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> m;
        map<char, int> r;
        for (char c : magazine) {
            if (m.count(c) == 0){
                m.emplace(c, 1);
                continue;
            }
            m[c] += 1;
        }
        for (char c : ransomNote) {
            if (r.count(c) == 0) {
                r.emplace(c,1);
                continue;
            }
            r[c] += 1;
        }
        for (auto obj : r) {
           if (m.count(obj.first) == 0) {
            return false;
           }
           else if (m[obj.first] < obj.second){
            return false;
           }
        }
    return true;
    }
};
