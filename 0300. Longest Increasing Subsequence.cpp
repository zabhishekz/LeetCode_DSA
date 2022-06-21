class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
    int n = nums.size();
        
    int dp[n];
    for(int i = 0; i < n; i++){
        dp[i] = 1;
        for(int j = 0; j < i; j++){
            if(nums[j] < nums[i]){
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }
    
    int lis = 0;
    for(int i = 0; i < n; i++){
        lis = max(lis, dp[i]);
    }
    return lis;
    }
};