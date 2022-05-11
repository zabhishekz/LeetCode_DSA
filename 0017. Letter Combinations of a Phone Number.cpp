class Solution {
public:
    string keypad[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"}; 
    vector<string> res;
    void rec(string digits, string out,int i, int n){
        if(i == n){
            res.push_back(out);
            return;
        }
        int dig = digits[i]-'0';
        if(dig == 0 or dig == 1){
            rec(digits, out, i+1, n);
        }
        for(int k = 0; k < keypad[dig].length(); k++){
            rec(digits, out+keypad[dig][k], i+1, n);
        }
        return;
    }
    vector<string> letterCombinations(string digits) {
        if(digits == ""){
            return res;
        }
        int n = digits.length();
        string out = "";
        rec(digits,out,0,n);
        return res;
    }
};