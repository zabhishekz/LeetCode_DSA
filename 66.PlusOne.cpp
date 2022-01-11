class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        int i = len-1;
        if(digits[i] < 9){
            digits[i] += 1;
            return digits;
        }
        else{
            digits[i] = 0;
            i--;
            while(digits[i] == 9 and i>=0){
                digits[i] = 0;
                i--;
            }
            if(i == -1){
                digits.insert(digits.begin(), 1);
            }
            digits[i] += 1;
            return digits;
        }
    }
};