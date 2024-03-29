class Solution {
public:
    int maximum69Number (int num) {
        int n = num;
        int i = 0;
        int j = -1;
        
        while(n){
            if(n%10 == 6){
                j = i;
            }
            i++;
            n/=10;
        }
        
        if (j == -1)
            return num;
        
        return num + pow(10, j)*3;
    }
};