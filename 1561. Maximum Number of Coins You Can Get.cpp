class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        reverse(piles.begin(),piles.end());
        int cnt = piles.size()/3;
        int cur = 0;
        int ans = 0;
        for(int i = 1; i < piles.size(); i+=2){
            if(cur == cnt){
                break;
            }
            ans += piles[i];
            cur++;  
        }
        return ans;
    }
};