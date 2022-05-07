class Solution {
public:
    int removePalindromeSub(string s) {
        if (s == "") return 0;
        for (int i = 0, j = s.size() - 1; i < j; i++, j--)
            if (s[i] != s[j]) return 2;
        return 1;
    }
};

/*
The trick to this problem is realizing that since we're dealing with subsequences and only 2 possible characters, the answer cannot possible be larger than 2. In fact, the answer will always be 2 unless S is already a palindrome, in which case the answer is 1, or S is an empty string, in which case the answer is 0.
*/