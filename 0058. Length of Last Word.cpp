class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.length() <= 0 ){
            return 0;
        }
        int i = s.length()-1;
        bool flag = false;
        int len = 0;
        while(i >= 0){
            if(s[i] == ' ' and flag == false){
                i--;
            }
            else if(s[i] != ' ' and flag == false){
                flag = true;
                i--;
                len++;
            }
            else if(s[i] != ' ' and flag == true){
                i--;
                len++;
            }
            else if(s[i] == ' ' and flag == true){
                break;
            }
        }
        return len;
    }
};