class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> sta;
        string res;
        sta.push(s[0]);
        for(int i = 1; i<s.length(); i++){
            if(!sta.empty() and sta.top() == s[i]){
                while(!sta.empty() and sta.top()==s[i]){
                    sta.pop();
                }
            }
            else{
                sta.push(s[i]);
            }
        }
        while(!sta.empty()){
            res += sta.top();
            sta.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};