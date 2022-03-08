class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1,s2;
        for(int i = 0; i < s.length(); i++){
            if(s[i]=='#' and !s1.empty()){
                s1.pop();
            }
            else if(s[i]=='#' and s1.empty()){
                continue;
            }
            else{
                s1.push(s[i]);
            }
        }
        for(int i = 0; i < t.length(); i++){
            if(t[i]=='#' and !s2.empty()){
                s2.pop();
            }
            else if(t[i]=='#' and s2.empty()){
                continue;
            }
            else{
                s2.push(t[i]);
            }
        }
        while(!s1.empty() and !s2.empty()){
            if(s1.top() == s2.top()){
                s1.pop();
                s2.pop();
            }
            else{
                return false;
            }
        }
        if(s1.empty() and s2.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};