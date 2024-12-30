class Solution {
public:
    int MOD = 1000000007;
    vector<int> dp;

    int f(int low, int high, int zero, int one, int len) {
        if (len > high)
            return 0;
        if (dp[len] != -1) {
            return dp[len];
        }
        int tempAns = 0;
        if (len >= low && len <= high) {
            tempAns++;
        }
        tempAns = (tempAns + f(low, high, zero, one, len + zero)) % MOD;
        tempAns = (tempAns + f(low, high, zero, one, len + one)) % MOD;
        return dp[len] = tempAns;
    }

    int countGoodStrings(int low, int high, int zero, int one) {
        dp.resize(high + 1, -1);
        return f(low, high, zero, one, 0); 
    }
};