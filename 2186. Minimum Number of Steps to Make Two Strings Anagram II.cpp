class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> m;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int cnt = 0;
        if(s == t){
            return 0;
        }
        for(char c: s){
            m[c]++;
        }
        for(char c: t){
            m[c]--;
        }
        for(auto a : m){
            cnt += (abs(a.second));
        }
        return cnt;
    }
};