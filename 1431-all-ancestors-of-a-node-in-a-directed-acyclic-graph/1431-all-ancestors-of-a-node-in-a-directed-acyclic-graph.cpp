class Solution {
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for (auto it : edges) {
            adj[it[1]].push_back(it[0]);
        }

        vector<vector<int>> ans;

        for (int i = 0; i < n; i++) {
            queue<int> q;
            q.push(i);
            vector<int> v;
            vector<int> vis(n, 0);

            while (!q.empty()) {
                for (auto it : adj[q.front()]) {
                    if (!vis[it]) {
                        q.push(it);
                        v.push_back(it);
                        vis[it] = 1;
                    }
                }
                q.pop();
            }

            sort(v.begin(), v.end());

            ans.push_back(v);
        }

        return ans;
    }
};