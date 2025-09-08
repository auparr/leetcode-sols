class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        int a = 1;
        int b = n - 1;
        for (int i = 0; i < n; i++) {
            string str_b = to_string(b);
            string str_a = to_string(a);
            bool valid = find(str_b.begin(), str_b.end(), '0') != str_b.end() || find(str_a.begin(), str_a.end(), '0') != str_a.end();
            if(valid){
                b--;
                a++;
            }
        }
        return {a,b};
    }
};
