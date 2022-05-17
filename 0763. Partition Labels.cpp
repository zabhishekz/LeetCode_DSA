class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> end_idx(26,0);
        vector<int> res;
        
        for(int i = 0; i < s.length(); ++i)
            end_idx[s[i] - 'a']  = i;
        
        
        int start = 0;
        int end = 0;
        for(int i = 0; i < s.length(); i++){
            end = max(end, end_idx[s[i] - 'a']);
            if( i == end){
                res.push_back(i - start + 1);
                start = i + 1;
            }
        }
        
        return res;
    }
};