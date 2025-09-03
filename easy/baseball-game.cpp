class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> points;
        for(auto op : operations) {
            if (isdigit(op[0]) || (op.size() > 1)) { 
                points.push_back(stoi(op));
            }
            else{
                switch (op[0]){
                case 'D':
                    points.push_back(points[points.size()-1] * 2);
                    break;
                case 'C':
                    points.pop_back();
                    break;
                case '+':
                    points.push_back(points[points.size()-1] + points[points.size()-2]);
                    break;
                }
            }
        }
        int total = 0;
        for(int n : points) {
            total += n;
        }
        return total;
    }
};
