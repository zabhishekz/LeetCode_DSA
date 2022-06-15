class Solution {
public:
    string countAndSay(int n) {
        string res="1";
        n--;
        while(n){
            string tmp = "";
            for(int i = 0; i < res.size(); i++){
                int cnt = 1;
                while(i+1 < res.size() and res[i] == res[i+1]){
                    cnt++;
                    i++;
                }
                tmp += to_string(cnt)+res[i];
            }
            res = tmp;
            n--;
        }
        return res;
    }

};