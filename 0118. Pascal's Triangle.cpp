class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(int i = 0; i < numRows; i++){
            vector<int> v(i+1);
            int x = i+1;
            for(int j = 0; j <x; j++ ){
                if(j==0 || j == x-1){
                    v[j] = 1;
                }
                else{
                    v[j] = res[i-1][j-1] + res[i-1][j];
                }
            }
            res.push_back(v);
        }
        return res;
    }
};