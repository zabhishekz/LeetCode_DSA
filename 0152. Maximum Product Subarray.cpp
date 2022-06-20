class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int res,ma,mi;
        res = ma = mi = nums[0];
        for(int i = 1; i < n; i++) {
            if(nums[i] < 0){
                swap(ma,mi);
            }
            ma = max(nums[i],ma*nums[i]);
            mi = min(nums[i],mi*nums[i]);
            res = max(res, max(ma, mi));
        }
        return res;
    }
};