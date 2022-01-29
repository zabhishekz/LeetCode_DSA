class Solution {
public:
    string reversePrefix(string word, char ch) {
        int idx = word.find(ch);
        if(idx == std::string::npos){
            return word;
        }
        reverse(word.begin(), word.begin()+idx+1);
        return word;
    }
};