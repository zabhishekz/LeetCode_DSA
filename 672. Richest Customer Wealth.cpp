class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int curw = 0;
        int maxw = 0;
        int m = accounts.size();
        for(int i = 0; i < m; i++){
            int n = accounts[i].size();
            curw = 0;
            for(int j = 0; j < n; j++){
                curw += accounts[i][j];
            }
            maxw = max(maxw,curw);
        }
        return maxw;
    }
};