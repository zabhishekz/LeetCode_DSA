class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans = '@';
        int s = 0;
        int e = letters.size()-1;
        while( s<= e){
            int mid = s +(e-s)/2;
            if(letters[mid] > target){
                ans = letters[mid];
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        if (ans == '@'){
            return letters[0];
        }
        return ans;
    }
};