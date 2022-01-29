class Solution {
public:
    bool halvesAreAlike(string s) {
        int i = 0;
        int n = s.length();
        int j = n/2;
        int v=0;
        string vowels = "aeiouAEIOU";
        while(i < n/2 and j < n){
            if(vowels.find(s[i]) != std::string::npos){
                v++;
            }
            if(vowels.find(s[j]) != std::string::npos){
                v--;
            }
            i++;
            j++;
        }        
        return v==0;
    }
};