class Solution {
public:
    bool makesquare(vector<int>& matchsticks) {
        if(matchsticks.size() < 4){
            return false;
        }
        int p = 0;
        for(auto el: matchsticks){
            p += el;
        }
        if(p%4 != 0){
            return false;
        }
        sort(matchsticks.begin(),matchsticks.end(), greater<int>());
        int side = p/4;
        vector<int> sides{side,side,side,side};
        return helper(matchsticks, 0, sides);
    }
    
    bool helper(vector<int>& matchsticks, int i, vector<int>& sides){
        if(i == matchsticks.size()){
            return sides[0] == 0 and sides[1] == 0 and sides[2] == 0 and sides[3] == 0;
        }
        for(int j = 0; j < 4; j++){
            if(matchsticks[i] > sides[j])
                continue;
            sides[j] -= matchsticks[i];
            if(helper(matchsticks, i+1, sides))
                return true;
            sides[j] += matchsticks[i];
        }
        return false;
    }
};