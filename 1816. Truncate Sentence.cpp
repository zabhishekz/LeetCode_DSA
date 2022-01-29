class Solution {
public:
    string truncateSentence(string s, int k) {
        string res = "";
        int wc = 1;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ' '){
                wc ++;
            }
            if(wc <= k){
                res += s[i];
            }
        }
        return res;
    }
};