class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map <char,int> stone;
        int total = 0;

        for(char ch : jewels) {
            stone[ch] = 1;
        }

        for(char ch : stones) {
            if(stone[ch]) total += 1;
        }

        return total;
    }
};
