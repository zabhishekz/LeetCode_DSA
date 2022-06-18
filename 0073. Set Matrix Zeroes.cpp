class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(); 
        int n = matrix[0].size(); 
        
        vector<int>rowmarker(m,1);
        vector<int>columnmarker(n,1); 
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j] == 0){
                    rowmarker[i] = 0; 
                    columnmarker[j] = 0;
                }
            }
        } 
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(rowmarker[i] == 0 or columnmarker[j] == 0)
                    matrix[i][j] =0 ;
             }
        }
    }
};


class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        int m = a.size();
        int n = a[0].size();
        
        bool firstRow = false;
        bool firstCol = false;
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(a[i][j] == 0){  
                    if(i==0) 
                        firstRow = true;
                    if(j==0) 
                        firstCol = true;
                    a[i][0] = 0;
                    a[0][j] = 0;
                }
            }
        }

        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                if(a[i][0] == 0 || a[0][j] == 0){
                    a[i][j] = 0;
                }
            }
        }
        
        if(firstRow){
            for(int i=0;i<n;i++) 
                a[0][i] = 0;
        }
        
        if(firstCol){
            for(int i=0;i<m;i++) 
                a[i][0] = 0;    
        }
    }
};