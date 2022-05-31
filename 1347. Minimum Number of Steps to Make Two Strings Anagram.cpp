class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> um;
        int ans = 0;
        for(auto a: s){
            um[a]++;
        }
        for(auto a: t){
            if(um[a]){
                um[a]--;
            }
            else{
                ans++;
            }
        }
        return ans;
    }
};