class Solution {
public:
    string sortSentence(string s) {
        string res = "";
        map<int,string> m;
        string currword = "";
        for(int i = 0; i < s.length();i++){
            if(s[i] == ' '){
                int dig = s[i-1] - '0';
                m[dig] = currword;
                currword = "";
            }
            else if(i+1 == s.length()){
                int dig = s[i] - '0';
                m[dig] = currword;
                currword = "";
            }
            else if(s[i+1] == ' '){
                continue;
            }
            else{
                currword += s[i];
            }
        }
        auto it = m.begin();
        res += it->second;
        it++;
        for(; it != m.end(); it++){
            res += " " + it->second;
        }
        return res;
    }
};