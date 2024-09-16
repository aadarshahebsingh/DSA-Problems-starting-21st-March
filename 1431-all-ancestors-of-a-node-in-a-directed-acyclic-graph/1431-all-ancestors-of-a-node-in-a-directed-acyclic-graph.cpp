class Solution {
public:
    void dfs(int node,vector<int>& visited,vector<int>adj[],set<int>& ancestors){
        visited[node]=1;
        for(int parent:adj[node]){
            if(!visited[parent]){
                dfs(parent,visited,adj,ancestors);
            }
            ancestors.insert(parent);
        }
    }
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<int> adj[n];
        for(int i=0;i<edges.size();i++){
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<vector<int>> ans(n);
        for(int i=0;i<n;i++){
            // vector<int> temp;
            vector<int> visited(n,0);
            set<int> anc;
            dfs(i,visited,adj,anc);

            ans[i]=vector<int>(anc.begin(),anc.end());
            sort(ans[i].begin(),ans[i].end());
            
        }
        return ans;
    }
};