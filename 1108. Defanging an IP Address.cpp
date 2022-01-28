class Solution {
public:
    string defangIPaddr(string address) {
        string res = "";
        for(int i = 0; i < address.length(); i++){
            if(address[i+1] == '.'){
                res += address[i];
                res += "[.]";
            }
            else if(address[i] == '.'){
                continue;
            }
            else{
                res += address[i];
            }
        }
        return res;
    }
};