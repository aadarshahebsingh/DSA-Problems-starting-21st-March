#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rowDir = {-1, 1, 0, 0};
    vector<int> colDir = {0, 0, -1, 1};

    bool isValid(vector<vector<bool>> &arr, int i, int j) {
        int n = arr.size();
        if (i < 0 || j < 0 || i >= n || j >= n || arr[i][j]) {
            return false;
        }
        return true;
    }

    bool isSafe(vector<vector<int>> &dis, int safeDist) {
        int n = dis.size();
        queue<pair<int, int>> q;
        if (dis[0][0] < safeDist) {
            return false;
        }
        q.push({0, 0});
        vector<vector<bool>> visited(n, vector<bool>(n, false));
        visited[0][0] = true;

        while (!q.empty()) {
            int currRow = q.front().first;
            int currCol = q.front().second;
            q.pop();
            if (currRow == n - 1 && currCol == n - 1) {
                return true;
            }
            for (int dirIdx = 0; dirIdx < 4; dirIdx++) {
                int newRow = currRow + rowDir[dirIdx];
                int newCol = currCol + colDir[dirIdx];
                if (isValid(visited, newRow, newCol)) {
                    if (dis[newRow][newCol] < safeDist) {
                        continue;
                    }
                    visited[newRow][newCol] = true;
                    q.push({newRow, newCol});
                }
            }
        }
        return false;
    }

    int maximumSafenessFactor(vector<vector<int>> &grid) {
        int n = grid.size();
        queue<pair<int, int>> q;
        vector<vector<bool>> visited(n, vector<bool>(n, false));
        vector<vector<int>> dis(n, vector<int>(n, INT_MAX));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    visited[i][j] = true;
                    q.push({i, j});
                    dis[i][j] = 0;
                }
            }
        }

        while (!q.empty()) {
            int currRow = q.front().first;
            int currCol = q.front().second;
            q.pop();
            for (int dirIdx = 0; dirIdx < 4; dirIdx++) {
                int newRow = currRow + rowDir[dirIdx];
                int newCol = currCol + colDir[dirIdx];
                if (isValid(visited, newRow, newCol) && dis[newRow][newCol] == INT_MAX) {
                    visited[newRow][newCol] = true;
                    dis[newRow][newCol] = dis[currRow][currCol] + 1;
                    q.push({newRow, newCol});
                }
            }
        }

        int low = 0, high = n;
        int ans = 0;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (isSafe(dis, mid)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }
};
