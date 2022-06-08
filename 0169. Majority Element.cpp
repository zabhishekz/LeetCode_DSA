class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto a: nums){
            m[a]++;
        }
        for(auto a: m){
            if(a.second > nums.size()/2){
                return a.first;
            }
        }
        
        return -1;
    }
};