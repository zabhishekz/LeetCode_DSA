class Solution {
public:
    void dj(vector <int> v, int i, int &ans){
        if(i == v.size()){
            ans++;
            return;
        }
        for(int j=i; j<v.size(); j++){
            if(v[j]%(i+1)==0 || (i+1)%v[j]==0){
                swap(v[j], v[i]);
                dj(v, i+1, ans);
                swap(v[j], v[i]);
            }
        }
    }

    int countArrangement(int N) {
        vector <int> v;
        int ans=0;
        for(int i=1; i <= N; i++){
            v.push_back(i);
        }
        dj(v, 0, ans);
        return ans;
    }
};