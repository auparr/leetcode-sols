class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {

        double mx = 0.0;  
        int idx = 0;     
        int ma = 0;       

        for(int i = 0; i < dimensions.size(); i++) {
            int m = dimensions[i][0];
            int n = dimensions[i][1];

            double s = sqrt(1.0*m*m + 1.0*n*n);
            int area = m*n;

            if (s > mx) {
                mx = s;
                ma = area;
                idx = i;
            } else if (s == mx && area > ma) {
                ma = area;
                idx = i;
            }
        }

        return dimensions[idx][0] * dimensions[idx][1];
    }
};
