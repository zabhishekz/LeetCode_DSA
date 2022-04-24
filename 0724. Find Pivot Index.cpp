class Solution {
public:
    int calsum(int s, int e, vector<int>& nums){
        int sum = 0;
        for(int i = s; i <=e; i++){
            sum += nums[i];
        }
        return sum;
    }
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int arrsum = calsum(0,n-1, nums);
        int lsum = 0;
        for(int i = 0; i < n; i++){
            if(i > 0){
                lsum = lsum + nums[i-1];
            }
            int rsum = arrsum-nums[i]-lsum;
            if(lsum == rsum){
                return i;
            }
        }
        return -1;
    }
};