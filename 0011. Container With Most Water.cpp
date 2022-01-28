class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0;
        int j = n-1;
        int curr = 0;
        int maxa = 0;
        while(i < j){
            curr = (j-i)*min(height[i],height[j]);
            maxa = max(curr,maxa);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxa;
    }
};