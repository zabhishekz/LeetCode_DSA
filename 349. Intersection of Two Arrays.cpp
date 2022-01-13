class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        set<int> s1;
        set<int> s2;
        for(auto a :nums1){
            s1.insert(a);
        }
        for(auto b: nums2){
            s2.insert(b);
        }
        for(auto x : s1){
            if(s2.find(x) != s2.end()){
                res.push_back(x);
            }
        }
        return res;
    }
};