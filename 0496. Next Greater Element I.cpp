class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack <int> s;
        vector<int> res;
        int n = nums2.size();
        map<int,int> m;
        m[nums2[n-1]] = -1;
        s.push(nums2[n-1]);
        for(int i = n-2; i >= 0; i--){
            while(!s.empty() and s.top() < nums2[i]){
                s.pop();
            }
            if(!s.empty() and s.top() > nums2[i]){
                m[nums2[i]] = s.top();
            }
            if(s.empty()){
                m[nums2[i]] = -1;
            }
            s.push(nums2[i]);
        } 
        for(auto a: nums1){
            res.push_back(m[a]);
        }
        return res;
    }
};