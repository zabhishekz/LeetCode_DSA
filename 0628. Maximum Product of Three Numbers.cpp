// Sol 1
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        return max(nums[0]*nums[1]*nums[n-1], nums[n-1]*nums[n-2]*nums[n-3]);
    }
};

// Sol2
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int fmin = INT_MAX;
        int smin = INT_MAX;
        
        int fmax = INT_MIN;
        int smax = INT_MIN;
        int tmax = INT_MIN;
        for(int a: nums){
            if(a<=fmin){
                smin = fmin;
                fmin = a;
            }
            else if(a<=smin and a>fmin){
                smin = a;
            }
            if (a >= fmax){
                tmax = smax;
                smax = fmax;
                fmax = a;
            }
            else if( a >= smax and a<fmax){
                tmax = smax;
                smax = a;
            }
            else if(a >= tmax){
                tmax = a;
            }
        }
        return max(fmax*smax*tmax, fmin*smin*fmax);
    }
};