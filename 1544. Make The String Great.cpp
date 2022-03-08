class Solution {
public:
    string makeGood(string s) {
        stack<char> m;
        for(int i = 0; i < s.length();i++){
            if(!m.empty() and (m.top()== s[i]-32 or m.top()== s[i]+32 )){
                m.pop();
            }
            else{
                m.push(s[i]);   
            }
        }
        string out="";
        while(!m.empty()){
            out = m.top()+out;
            m.pop();
        }
        return out;
    }
};