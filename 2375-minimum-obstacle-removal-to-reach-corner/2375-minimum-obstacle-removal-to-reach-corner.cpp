#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
#define maxn 100005
int fx[] = {-1, 1, 0, 0};
int fy[] = {0, 0, -1, 1};

class Solution {
public:
    int n, m;
    vector<vector<int>> vis, dis;

    bool valid(int x, int y)
    {
        if(x >= 0 and x < n and y >= 0 and y < m and !vis[x][y]) return true;
        else return false;
    }

    void bfs(int sx, int sy, vector<vector<int>>& grid)
    {
        vis[sx][sy] = 1;
        dis[sx][sy] = 0;
        deque<pii> q;
        q.push_front({sx, sy});
        while(!q.empty()) {
            pii top = q.front();
            int x = top.first;
            int y = top.second;
            q.pop_front();
            for(int k=0; k<4; k++) {
                int tx = x + fx[k];
                int ty = y + fy[k];
                if(valid(tx, ty)) {
                    vis[tx][ty] = 1;
                    if(grid[tx][ty] == 1) {
                        dis[tx][ty] = dis[x][y] + 1;
                        q.push_back({tx, ty});
                    }
                    else {
                        dis[tx][ty] = dis[x][y];
                        q.push_front({tx, ty});
                    }
                }
            }
        }
    }

    int minimumObstacles(vector<vector<int>>& grid) {
        n = grid.size(), m = grid[0].size();
        vector<int> v;
        for(int j=0; j<m; j++) v.push_back(0);
        for(int i=0; i<n; i++) {
            vis.push_back(v);
            dis.push_back(v);
        }

        bfs(0, 0, grid);

        int ans = dis[n-1][m-1];
        return ans;
    }
};