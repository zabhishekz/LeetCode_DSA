class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> res;
        int mincom = INT_MAX;
        int currcom = INT_MAX;
        int l1 = list1.size();
        int l2 = list2.size();
        for(int i = 0; i < l1; i++){
            for(int j = 0; j < l2; j++){
                if(list1[i] == list2[j]){
                    currcom = i + j;
                    if(currcom < mincom){
                        mincom = currcom;
                        res.clear();
                        res.push_back(list1[i]);
                    }
                    else if(currcom == mincom){
                        res.push_back(list1[i]);
                    }
                }
            }
        }
        return res;
    }
};