class Solution {
public:
    int xorOperation(int n, int start) {
        int res = 0;
        while(n>0){
            res = res ^ start;
            n--;
            start += 2;
        }
        return res;
    }
};