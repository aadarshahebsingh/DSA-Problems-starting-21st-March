class Solution {
public:
    int solve(vector<int>& nums, int target, int index, int ans, vector<vector<int>> &dp, int offset) {
        if (index == nums.size()) {
            return ans == target ? 1 : 0;
        }

        if (dp[index][ans + offset] != -1) {
            return dp[index][ans + offset];
        }

        int include = solve(nums, target, index + 1, ans + nums[index], dp, offset);
        int exclude = solve(nums, target, index + 1, ans - nums[index], dp, offset);

        return dp[index][ans + offset] = include + exclude;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int offset = sum; 

        vector<vector<int>> dp(n, vector<int>(2 * sum + 1, -1));
        return solve(nums, target, 0, 0, dp, offset);
    }
};