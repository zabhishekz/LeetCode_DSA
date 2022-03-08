class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> res;
        char c1 = s[0];
        char n1 = s[1];
        char c2 = s[3];
        char n2 = s[4];
        for(char c = c1; c != c2+1; c++){
            for(char n = n1; n != n2+1; n++){
                string temp = "";
                temp += c;
                temp += n;
                res.push_back(temp);
            } 
        }
        return res;
    }
};