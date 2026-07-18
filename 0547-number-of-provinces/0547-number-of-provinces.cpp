class Solution {
public:
    vector<vector<int>> adj;
    void fillAdj(vector<vector<int>>& isConnected){
        int n=isConnected.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                
                if(isConnected[i][j]==1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
    }
    void dfs(int start,vector<bool> &vis){
        stack<int> st;
        st.push(start);
        vis[start]=true;
        while(!st.empty()){
            int ele=st.top();
            st.pop();
            vis[ele]=true;
            
            for(auto &x:adj[ele]){
                if(!vis[x]){
                    st.push(x);
                    vis[x]=true;
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        adj.resize(n);
        fillAdj(isConnected);
        vector<bool> vis(n,false);
        int cnt=0;
        for(int i=0;i<n;i++){
            if(vis[i]==false){
                dfs(i,vis);
                cnt++;
            }
        }
        return cnt;

    }
};