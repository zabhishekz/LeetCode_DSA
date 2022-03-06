class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> res;
        vector<int> curseq;
        for(int k = 0; k < l.size(); k++){
            curseq.clear();
            for(int i = l[k]; i<=r[k];i++){
                curseq.push_back(nums[i]);
            }
            sort(curseq.begin(),curseq.end());
            int s = curseq[1]-curseq[0];
            int flag = 0;
            for(int i=2; i < curseq.size(); i++){
                if(curseq[i]-curseq[i-1] != s){
                    flag = 1;
                }
            }
            if(flag == 0){
                res.push_back(true);
            }
            else{
                res.push_back(false);
            }
        }
        return res;
    }
};