class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack <int> s;
        int n = nums.size();
        vector<int> v;
        s.push(nums[n-1]);
        for(int i = 2*n-2; i >= 0; i--){
            while(!s.empty() and s.top() <= nums[i%n]){
                s.pop();
            }
            if(i<n and !s.empty() and s.top() > nums[i]){
                v.push_back(s.top());
            }
            if(i<n and s.empty()){
                v.push_back(-1);
            }
            s.push(nums[i%n]);
        } 
        reverse(v.begin(),v.end());
        return v;
    }
};