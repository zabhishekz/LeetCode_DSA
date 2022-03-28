class Solution {
public:
    int strStr(string haystack, string needle) {
        auto it = haystack.find(needle);
        if(it == std::string::npos){
            return -1;
        }
        else{
            return it;
        }
    }
};