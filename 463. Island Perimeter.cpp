class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans =0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j]==0){
                    continue;
                }
                else{
                    if(i == 0){
                        ans += 1;
                    }
                    if(i == grid.size()-1){
                        ans += 1;
                    }
                    if(j == 0){
                        ans += 1;
                    }
                    if (j == grid[i].size()-1){
                        ans += 1;
                    }
                    if(i>0 and grid[i-1][j]==0){
                        ans += 1;
                    }
                    if(i < grid.size()-1 and grid[i+1][j]==0){
                        ans +=1;
                    }
                    if(j>0 and grid[i][j-1]==0){
                        ans += 1;
                    }
                    if(j < grid[i].size()-1 and grid[i][j+1]==0){
                        ans +=1;
                    }
                }
            }
        }
        return ans;
    }
};