class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int res = 0;
        int idx;
        for(int i = 0; i < stones.length(); i++){
            idx = jewels.find(stones[i]);
            if(idx <= jewels.length()-1){
                res++;
            }
        }
        return res;
    }
};