class Solution {
public:
    bool checkIfPangram(string sentence) {
        map <char,bool> m;
        for(char ch= 'a'; ch <= 'z'; ch++){
            m[ch] = false;
        }
        for(int i = 0; i < sentence.length(); i++){
            m[sentence[i]] = true;
        }
        for(auto a : m){
            if(a.second == false){
                return false;
            }
        }
        return true;
    }
};