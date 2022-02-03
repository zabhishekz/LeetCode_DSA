class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int i = 0;
        vector <int> v;
        while(i < nums.size()){
            int b = nums[i];
            while(b>0){
                v.push_back(nums[i+1]);
                b--;
            }
            i += 2;
        }
        return v;
    }
};