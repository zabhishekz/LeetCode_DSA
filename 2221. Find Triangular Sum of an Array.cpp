class Solution {
public:
    int triangularSum(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        vector<int> newnums;
        for(int i = 0; i < nums.size()-1;i++){
            newnums.push_back((nums[i]+nums[i+1])%10);
        }
        return triangularSum(newnums);
    }
};