class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res = "";
        int k = 0;
        int i = 0;
        int j = 0;
        while(i < word1.length() and  j< word2.length()){
            if(k%2 == 0){
                res += word1[i];
                k++;
                i++;
            }
            else{
                res += word2[j];
                k++;
                j++;
            }
        }
        while(i < word1.length()){
            res += word1[i];
            k++;
            i++;
        }
        while(j < word2.length()){
            res += word2[j];
            k++;
            j++;
        }
        return res;
    }
};