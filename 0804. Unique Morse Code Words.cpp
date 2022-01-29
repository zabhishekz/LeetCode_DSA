class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string a[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        string temp = "";
        for(int i = 0; i < words.size(); i++){
            temp = "";
            for(int j = 0; j < words[i].length(); j++){
                temp += a[(int)(words[i][j])-'a'];
            }
            words[i] = temp;
        }
        set<string> k;
        for(auto a: words){
            k.insert(a);
        }
        return k.size();
    }
}; 