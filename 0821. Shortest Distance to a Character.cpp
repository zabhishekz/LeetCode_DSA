class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> v;
        vector<int> res;
        for(int i=0; i < s.length(); i++){
            if(s[i] == c){
                v.push_back(i);
            }
        }
        for(int i=0; i < s.length(); i++){
            int mini = INT_MAX;
            for(auto a: v){
                mini = min(mini,abs(a-i));
            }
            res.push_back(mini);
        }
        return res;
    }
};