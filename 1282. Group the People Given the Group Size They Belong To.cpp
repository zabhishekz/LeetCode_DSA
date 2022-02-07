class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> v;
        map<int,vector<int>> m;
        for(int i = 0; i < groupSizes.size(); i++){
            m[groupSizes[i]].push_back(i);
        }
        for(auto a : m){
            int len = a.second.size();
            if(len < a.first){
                v.push_back(a.second);
            }
            else{
                int cnt = len/(a.first);
                int i = 0;
                int j = 0;
                while(cnt > 0){
                    vector<int> x;
                    for(;i<a.first+j;i++){
                        x.push_back(a.second[i]);
                    }
                    v.push_back(x);
                    j += a.first;
                    cnt--;
                }
            }
        }
        return v;
    }
};