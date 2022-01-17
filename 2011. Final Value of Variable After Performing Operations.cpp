class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        int n = operations.size();
        for(int i = 0; i < n; i++){
            string str = operations[i];
            if(str == "X++" || str == "++X"){
                x++;
            }
            else if(str == "X--" || str == "--X"){
                x--;
            }
        }
        return x;
    }
};