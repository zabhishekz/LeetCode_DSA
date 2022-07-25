class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int res = 0;
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = nums.size()-1;
        while(i<j){
            res = max(res,nums[i]+nums[j]);
            i++;
            j--;
        }
        return res;
    }
};