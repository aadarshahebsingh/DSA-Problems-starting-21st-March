class Solution {
public:
    void guardGrid(vector<vector<int>>& arr, int x, int y, int dx, int dy, int m, int n) {
        while (x >= 0 && x < m && y >= 0 && y < n && arr[x][y] != 1 && arr[x][y] != 2) {
            arr[x][y] = 3; // Mark as guarded
            x += dx;
            y += dy;
        }
    }

    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> arr(m, vector<int>(n, 0));
        for (auto& wall : walls) {
            arr[wall[0]][wall[1]] = 1; // Wall
        }
        for (auto& guard : guards) {
            arr[guard[0]][guard[1]] = 2; // Guard
        }
        for (auto& guard : guards) {
            int x = guard[0], y = guard[1];
            guardGrid(arr, x - 1, y, -1, 0, m, n); // Up
            guardGrid(arr, x + 1, y, 1, 0, m, n);  // Down
            guardGrid(arr, x, y - 1, 0, -1, m, n); // Left
            guardGrid(arr, x, y + 1, 0, 1, m, n);  // Right
        }
        
        int unguardedCount = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (arr[i][j] == 0) {
                    ++unguardedCount;
                }
            }
        }
        
        return unguardedCount;
    }
};
