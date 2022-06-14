class Solution {
public:
    vector<vector<int>> result;
    
    void recursion(vector<int> nums, vector<int> out, int i, int n){
        if(i == n){
            result.push_back(out);
            return;
        }
        recursion(nums,out,i+1, n);
        out.push_back(nums[i]);
        recursion(nums,out,i+1, n);
        out.pop_back();
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> out;
        recursion(nums,out,0,nums.size());
        return result;
    }
};