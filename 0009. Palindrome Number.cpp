// solution 1
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        string str = to_string(x);
        int i = 0;
        int j = str.length()-1;
        while(i <= j){
            if(str[i] != str[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
        
    }
};

// solution 2
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        int number = x;
        long long int reverse = 0;
        int digit;
        while(number > 0){
            digit = number%10;
            reverse = reverse*10 + digit;
            number = number/10;
        }
        return x == reverse;
    }
};