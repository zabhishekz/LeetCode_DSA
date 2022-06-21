class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        int n = nums.size();
        int low = 0;
        int high = n-1;
        int mid;
		
        while(low<=high) {
            mid = low+(high-low)/2;
			
            if((mid-1<0 || nums[mid]>nums[mid-1] )  && (mid+1>=n || nums[mid]>nums[mid+1])) {
                return mid;
            }
            
            else if(nums[mid+1]>nums[mid]) {
                low = mid+1;
            }
            
            else {
                high = mid-1;
            }
        }
        
        return -1;
    }
};