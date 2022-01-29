class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto s: words){
            string os = s;
            reverse(s.begin(),s.end());
            if(s == os){
                return os;
            }
        }
        return "";
    }
};