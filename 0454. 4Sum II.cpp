class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
      unordered_map<int, int> m; 
      
      for(auto a: nums1){
        for(auto b: nums2){
            m[a+b]++;
        }
      }
        
      int count = 0;
      for(auto c: nums3){
          for(auto d: nums4){
              auto iter = m.find(-(c+d));
              if(iter != m.end() ){ 
                  count += iter->second; 
              }
          }
      }
        
    return count;
    }
};