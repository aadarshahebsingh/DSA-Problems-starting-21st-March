class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        // Step 1: Ensure all rows start with a '1' in the most significant bit (leftmost column)
        for (int i = 0; i < n; ++i) {
            if (grid[i][0] == 0) {
                for (int j = 0; j < m; ++j) {
                    grid[i][j] ^= 1;
                }
            }
        }

        // Step 2: Ensure each column has more '1's than '0's by flipping if necessary
        for (int j = 1; j < m; ++j) {
            int oneCnt = 0;
            for (int i = 0; i < n; ++i) {
                oneCnt += grid[i][j];
            }
            if (oneCnt < n - oneCnt) {
                for (int i = 0; i < n; ++i) {
                    grid[i][j] ^= 1;
                }
            }
        }

        int score = 0;
        for (int i = 0; i < n; ++i) {
            int rowValue = 0;
           for (int j = 0; j < m; ++j) {
                rowValue = (rowValue << 1) + grid[i][j];
            }
           score += rowValue;
        }

        return score;
    }
};
