class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos,neg,res;
        for(auto a: nums){
            if(a < 0){
                neg.push_back(a);
            }
            else{
                pos.push_back(a);
            }
        }
        int i = 0;
        int j = 0;
        int p = pos.size();
        int n = neg.size();
        int k = p+n;
        int l = 0;
        while(l < k){
            if(l%2 == 0){
                res.push_back(pos[i]);
                i++;
                l++;
            }
            else{
                res.push_back(neg[j]);
                j++;
                l++;
            }
        }
        return res;
    }
};

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int indexpos = 0, indexneg=1;
        for(auto num: nums){
            if(num>0){
                ans[indexpos] = num;
                indexpos+=2;
            }
            if(num<0){
                ans[indexneg] = num;
                indexneg += 2;
            }
        }
        return ans;
        
    }
};