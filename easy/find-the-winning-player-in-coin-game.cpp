class Solution {
public:
    string winningPlayer(int x, int y) {
        int turn = min(x,y/4);
        if (turn % 2 == 0) return "Bob";
        return "Alice";
    }
};
