class Solution {
public:
    int balancedStringSplit(string s) {
        int l = 0;
        int r = 0;
        int c = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i]=='R') r++;
            else l++;
            if(r == l) c++;
        }
        return c;
    }
};