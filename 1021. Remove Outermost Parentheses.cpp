class Solution {
public:
    string removeOuterParentheses(string s) {
        int d = 0;
        string res="";
        for(int i = 0; i <s.length(); i++){
            if(s[i] == '('){
                d++;
            }
            if(d>1){
                res += s[i];
            }
            if(s[i]==')'){
                d--;
            }
        }
        return res;
    }
};