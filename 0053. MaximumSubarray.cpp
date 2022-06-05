class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int len = nums.size();
        if (len<0)
          return 0;
        int cs = nums[0];
        int ms = nums[0];
        for(int i = 1; i<len; i++){
            if(cs < 0){
                cs = 0;
            }
            cs += nums[i];
            ms = max(cs, ms);
        }
        
        return ms;
    }
};