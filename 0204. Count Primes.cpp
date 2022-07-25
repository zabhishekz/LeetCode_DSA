class Solution {
public:
    int countPrimes(int n) {
        vector<bool> vis(n, false);
        int ans = 0;
        for (int num = 2; num < n; num++) {
            if (vis[num]) 
                continue;
            ans++;
            for (long mult = (long)num * num; mult < n; mult += num)
                vis[mult] = true;
        }
        return ans;
    }
};