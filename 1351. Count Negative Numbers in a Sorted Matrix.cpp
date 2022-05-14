class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int cnt = 0;
        for(auto a: grid){
            for(auto b : a){
                if(b < 0){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};