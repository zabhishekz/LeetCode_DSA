class Solution {
public:
    int subtractProductAndSum(int n) {
        int p = 1;
        int s = 0;
        while(n > 0){
            int dig = n%10;
            s += dig;
            p *= dig;
            n /= 10;
        }
        return p-s;
    }
};