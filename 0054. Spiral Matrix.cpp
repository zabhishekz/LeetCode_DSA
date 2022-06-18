class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int m = matrix.size();
        int n = matrix[0].size();
        int sr = 0;
        int sc = 0;
        int er = m-1;
        int ec = n-1;
        while(sr <= er and sc <= ec){
            for(int i = sc; i <= ec; i++){
                res.push_back(matrix[sr][i]);
            }
            sr++;
            for(int i = sr; i <= er; i++){
                res.push_back(matrix[i][ec]);
            }
            ec--;
            if(sr <= er){
                for(int i = ec; i >= sc; i--){
                    res.push_back(matrix[er][i]);
                }
                er--;
            }
            if(sc <= ec){
                for(int i = er; i >= sr; i--){
                    res.push_back(matrix[i][sc]);
                }
                sc++;
            }
        }
        return res;
    }
};