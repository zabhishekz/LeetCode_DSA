class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> v;
        vector<int> res;
        for(int i= 0; i < boxes.length(); i++){
            if(boxes[i] == '1'){
                v.push_back(i);
            }
        }
        int cnt;
        for(int i = 0; i < boxes.length(); i++){
            cnt = 0;
            for(auto a: v){
                cnt += abs(i-a);
            }
            res.push_back(cnt);
        }
        return res;
    }
};