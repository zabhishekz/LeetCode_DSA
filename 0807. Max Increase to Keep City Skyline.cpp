class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> w,n;
        for(int i = 0; i < grid.size(); i++){
            int maxa = 0;
            for(int j = 0; j < grid[i].size(); j++){
                maxa = max(maxa, grid[i][j]);
            }
            w.push_back(maxa);
        }
        for(int j = 0; j < grid[0].size(); j++){
            int maxb = 0;
            for(int i = 0; i < grid.size(); i++){
                maxb = max(maxb, grid[i][j]);
            }
            n.push_back(maxb);
        }
        int ans = 0;
        for(int i = 0; i< grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                ans += min(w[i],n[j])-grid[i][j];
            }
        }
        return ans;
    }
};