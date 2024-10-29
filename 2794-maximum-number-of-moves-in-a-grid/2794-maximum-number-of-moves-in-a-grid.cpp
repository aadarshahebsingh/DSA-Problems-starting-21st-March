class Solution {
public:
    vector<vector<int>> dp;
    int row, col;

    int helper(int i, int j, int prev, vector<vector<int>>& grid) {
        if (i < 0 || i >= row || j >= col || grid[i][j] <= prev) return 0;
        if (dp[i][j] != -1) return dp[i][j];

        int temp = grid[i][j];
        int maxi = 1;
        maxi = max(maxi, 1 + helper(i + 1, j + 1, temp, grid));
        maxi = max(maxi, 1 + helper(i, j + 1, temp, grid));
        maxi = max(maxi, 1 + helper(i - 1, j + 1, temp, grid));

        return dp[i][j] = maxi;
    }

    int maxMoves(vector<vector<int>>& grid) {
        row = grid.size();
        col = grid[0].size();
        dp.assign(row, vector<int>(col, -1));

        int ans = 0;
        for (int i = 0; i < row; i++) {
            ans = max(ans, helper(i, 0, -1, grid));
        }
        
        return ans - 1;
    }
};
