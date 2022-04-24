class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int currlen = 1;
        int maxlen = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]>nums[i-1]){
                currlen++;
            }
            else{
                currlen = 1;
            }
            maxlen = max(currlen,maxlen);
        }
        return maxlen;
    }
};