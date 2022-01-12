class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int len = nums.size();
        if(len == 0){
            return NULL;
        }
        int j = 0;
        for(int i = 1; i < len; i++){
            if(nums[i] != nums[j]){
                j++;
                nums[j] = nums[i];
            }
        }
        return j+1;
        
    }
};