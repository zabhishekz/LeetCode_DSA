class Solution {
public:
    int maxDepth(string s) {
        stack<char> sta;
        int ans = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                sta.push(s[i]);
            }
            else if(s[i] == ')'){
                if(!s.empty()){
                    int x = sta.size();
                    ans = max(ans,x);
                    sta.pop();
                }
                else{
                    return -1;
                }
            }
        }
        return ans;
    }
};