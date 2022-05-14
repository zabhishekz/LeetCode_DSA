class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1 || num == 0){
            return true;
        }
        int s = 1;
        int e = num/2;
        while(s<=e){
            long long int mid = s + (e-s)/2;
            long long int c = mid * mid;
            if(c == num){
                return true;
            }
            else if(c < num){
                s = mid + 1;
            }
            else{
                e = mid - 1; 
            }
        }
        return false;    
    }
};