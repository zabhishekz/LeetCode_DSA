class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int ans = 0;
        priority_queue<int> pq;
        for(auto a: stones){
            pq.push(a);
        }
        while(!pq.empty()){
            int y = pq.top();
            pq.pop();
            if(pq.size()==0){
                ans = y;
                break;
            }
            int x = pq.top();
            pq.pop();
            if(y==x){
                continue;
            }
            if(x < y){
                pq.push(y-x);
            }
        }
        return ans;
    }
};