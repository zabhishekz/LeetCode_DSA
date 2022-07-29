class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double csum = 0;
	    for(int i = 0; i < k; i++){
	        csum += nums[i];
	    }
	    double msum = csum;
	    for(int i = k; i < nums.size(); i++){
	        csum += nums[i];
	        csum -= nums[i-k];
	        if(csum > msum ){
	            msum = csum;
	        }
	    }
	    return msum/k;
    }
};