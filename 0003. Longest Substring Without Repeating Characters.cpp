class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> count;
        int ans=0;
        int i=0;
        int j=0;
        
        while(j<s.length()){
            if(count.find(s[j])!=count.end()){
                while(s[i]!=s[j]){
                    count.erase(s[i]);
                    i++;   
                }
                count.erase(s[i]);
                i++;
            }
            if((j-i+1)>ans){
                ans=j-i+1;
            }
            count.insert(s[j]);
            j++;
        }
        
        return ans;  
    }
};