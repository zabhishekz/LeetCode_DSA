// Solution 1
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto n: nums){
            m[n]++;
        }
        for(int i=0; i <= nums.size(); i++){
            if(m[i]==0){
                return i;
            }
        }
        return -1;
    }
};

// Solution 2
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int cursum = 0; 
        for(int i = 0; i <= nums.size(); i++){
            sum += i;
            if(i < nums.size())
                cursum += nums[i];
        }
        return sum-cursum;
        
    }
};

// Solution 3
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        int ans = n;
        for(int i = 0; i < n; i++){
            ans = ans^i^nums[i];
        }
        return ans;
        
    }
};