class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res; 
        set<int> s;
        int n = nums.size();
        for(auto a: nums){
            s.insert(a);
        }
        for(int i = 1; i <= n; i++){
            if(s.find(i) == s.end()){
                res.push_back(i);
            }
        }
        return res;
    }
};