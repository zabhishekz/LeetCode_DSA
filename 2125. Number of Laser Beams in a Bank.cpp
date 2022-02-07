class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0;
        vector<int> res;
        for(int i = 0; i<bank.size();i++){
            int cnt = 0;
            for(int j=0; j<bank[i].length(); j++){
                if(bank[i][j]=='1'){
                    cnt++;
                }
            }
            if(cnt == 0){
                continue;
            }
            res.push_back(cnt);
        }
        int s = res.size();
        for(int i = 1; i < s; i++){
            ans += (res[i]*res[i-1]);
        }
        return ans;
    }
};