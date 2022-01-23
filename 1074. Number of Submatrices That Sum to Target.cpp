class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int count = 0;
        int sum = 0;
        for(int i = 0; i < m; i++){
            for(int j = 1; j < n ; j++){  
                matrix[i][j] += matrix[i][j-1];
            }
        }
        for(int j = 0; j < n; j++){
            for(int i = 1; i < m ; i++){  
                matrix[i][j] += matrix[i-1][j];
            }
        }
        for(int li = 0; li < m; li++){
            for(int lj = 0; lj < n ; lj++){
                for(int bi = li; bi < m; bi++){
                    for(int bj = lj; bj < n ; bj++){
                        sum = matrix[bi][bj];
                        if(lj-1 >= 0){
                            sum -= matrix[bi][lj-1];
                        }
                        if(li-1 >= 0){
                            sum -= matrix[li-1][bj];
                        }
                        if(li-1 >= 0 and lj-1>= 0){
                            sum += matrix[li-1][lj-1];
                        }
                        if(sum == target){
                            count += 1;
                        }
                    }
                }
            }
        }
        return count;
    }
};