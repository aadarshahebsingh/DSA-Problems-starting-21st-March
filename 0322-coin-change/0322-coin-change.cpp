#include <vector>
#include <algorithm>
#include <climits> // For INT_MAX

using namespace std;

class Solution {
public:
    int helper(vector<int>& coins, int amount, int i, vector<vector<int>>& memo) {
        if (amount == 0) return 0;
        if (i == coins.size() || amount < 0) return INT_MAX - 1;
        if (memo[i][amount] != -1) return memo[i][amount];
        int takeIt = helper(coins, amount - coins[i], i, memo);
        if (takeIt != INT_MAX - 1) takeIt++;
        int notTake = helper(coins, amount, i + 1, memo);
        return memo[i][amount] = min(takeIt, notTake);
    }
    
    int coinChange(vector<int>& coins, int amount) {
        if (amount == 0) return 0;
        
        vector<vector<int>> memo(coins.size(), vector<int>(amount + 1, -1));
        int result = helper(coins, amount, 0, memo);
        
        return result == INT_MAX - 1 ? -1 : result;
    }
};
