class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> v(m, vector<int>(n, 0));
        int sum = 0;
        for(vector<int> a: indices){
            int ri = a[0];
            int rj = a[1];
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    if(i == ri){
                        v[i][j] += 1;
                    }
                    if(j == rj){
                        v[i][j] += 1;
                    }
                }
            }
        }
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(v[i][j]%2 != 0){
                    sum += 1;
                }
            }
        }
        return sum;
    }
};