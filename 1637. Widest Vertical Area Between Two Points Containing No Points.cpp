class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int maxa = 0;
        for(int i = 1; i < points.size(); i++){
            maxa = max(maxa,points[i][0]-points[i-1][0]);
        }
        return maxa;
    }
};