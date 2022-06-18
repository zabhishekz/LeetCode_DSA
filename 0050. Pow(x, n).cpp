class Solution {
public:
    double myPow(double x, int n) {
        int ans;
        if(n == 0){
            return 1;
        }
        if (n < 0) { 
            n = abs(n);
            x = 1/x;
        }
        double sa = myPow(x,n/2);
        sa *= sa;
        if( n%2 ==0){
            return sa;
        
        }else{
            return x*sa;
        }
    }
};