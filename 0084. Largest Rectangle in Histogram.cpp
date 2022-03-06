class Solution {
public:
    void generateps(vector<int> arr,int n, int ps[]){
        stack<int> s;
        for(int i = 0; i < n; i++){
            while(!s.empty() and arr[s.top()]>=arr[i]){
                s.pop();
            }
            if(s.empty()){
                ps[i] = -1; 
            }
            else if(arr[s.top()] < arr[i]){
                ps[i] = s.top();
            }
            s.push(i);
        }
    } 
    void generatens(vector<int> arr,int n,int ns[]){
        stack<int> s;
        for(int i = n-1; i >= 0; i--){
            while(!s.empty() and arr[s.top()]>=arr[i]){
                s.pop();
            }
            if(s.empty()){
                ns[i] = n; 
            }
            else if(arr[s.top()] < arr[i]){
                ns[i] = s.top();
            }
            s.push(i);
        }
    }   
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int ans = 0;
        int ns[n], ps[n];
        generatens(heights,n,ns);
        generateps(heights,n,ps);
        for(int i = 0; i < n; i++){
            ans = max(ans,(ns[i]-ps[i]-1)*heights[i]);
        }
        return ans;
    }
};