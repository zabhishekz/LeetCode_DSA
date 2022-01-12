class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len = nums.size();
        int mi = 0;
        for(int i = 0; i < len; i++){
            if(nums[i] == target){
                return i;
            }
            if(nums[i] < target){
                mi = i;
            }
        }
        if(nums[0]>target){
            return 0;            
        }
        return mi+1;
    }
};