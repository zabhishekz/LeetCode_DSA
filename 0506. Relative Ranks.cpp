class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> pq;
        for(int i = 0; i < score.size(); i++){
            pq.push({score[i],i});
        }
        vector<string> res(score.size());
        int i = 0;
        while(!pq.empty()){
            int idx = pq.top().second;
            pq.pop();
            if(i == 0){
                res[idx] = "Gold Medal";
            }
            else if(i == 1){
                res[idx] = "Silver Medal";
            }
            else if(i == 2){
                res[idx] = "Bronze Medal";
            }
            else{
                res[idx] = to_string(i + 1);
            }
            i++;
        }
        return res;
    }
};