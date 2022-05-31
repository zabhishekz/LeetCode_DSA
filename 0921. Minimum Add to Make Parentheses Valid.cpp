class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int ans = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                st.push('(');
            }
            else if(s[i] == ')' and !st.empty() and st.top() == '(' ){
                st.pop();
            }
            else if(s[i] == ')' and !st.empty() and st.top() == ')'){
                ans++;
            }
            else if(s[i] == ')' and st.empty()){
                ans++;
            }
        }
        return ans+st.size();
    }
};