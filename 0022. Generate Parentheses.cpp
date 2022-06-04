class Solution {
    vector<string> sol;
public:
    void generaterec(string out, int n, int open, int close){
        if(open == n and close == n){
            sol.push_back(out);
            return;
        }
        if(open < n){
            generaterec(out+'(',n,open+1,close);
        }
        if(close < open){
            generaterec(out+')',n,open,close+1);
        }
        return;
    }
    vector<string> generateParenthesis(int n) {
        string out="";
        generaterec(out,n,0,0);
        return sol;
    }
};