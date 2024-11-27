#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        vector<int> ans;
        vector<vector<int>> adj(n);
        for(int i = 0; i < n - 1; i++) {
            adj[i].push_back(i + 1);
        }
        
        for(auto &e : queries) {
            adj[e[0]].push_back(e[1]);
            ans.push_back(bfs(n, adj));
        }
        
        return ans;
    }
    
private:
    int bfs(int n, vector<vector<int>>& adj) {
        vector<int> dist(n, n);
        queue<int> q;
        dist[0] = 0;
        q.push(0);
        
        while(!q.empty()) {
            int u = q.front(); q.pop();
            for(int i : adj[u]) {
                if(dist[i] > dist[u] + 1) {
                    dist[i] = dist[u] + 1;
                    q.push(i);
                }
            }
        }
        return dist[n - 1];
    }
};
