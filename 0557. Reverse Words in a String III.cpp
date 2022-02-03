class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int j = 0;
        int n = s.length();
        while(i < n){
            if(s[i] == ' '){
                reverse(s.begin()+j,s.begin()+i);
                i++;
                j = i;
            }
            else if(i == n-1){
                reverse(s.begin()+j, s.end());
                i++;
            }
            else{
                i++;
            }
        }
        return s;
    }
};