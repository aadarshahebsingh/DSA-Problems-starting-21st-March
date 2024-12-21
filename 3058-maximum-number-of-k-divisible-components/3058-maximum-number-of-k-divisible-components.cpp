class Solution {
public:
    long long  dfs(int node,vector<vector<int>>&adj,vector<int>&vis,vector<int>&values,int &no_of_components,int k){
        vis[node]=1;
        long long  x=0;
        bool loop=false;
        for(auto i:adj[node]){
            if(!vis[i]){
                long long a=dfs(i,adj,vis,values,no_of_components,k);
                loop=true;
                
                if(a%k==0){no_of_components++;}//If one of child is divisible by k no need to add it to the return value else we just add the number of components++;
                else{x+=a;}
            }
        }
        if(loop){return x+values[node];}//Ensure if the node contains a child 
        return values[node];
    }
    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
         vector<vector<int>> adj(n);//Space Complexity:O(V+E)
        for (auto& edge : edges) {//Time Complexity:O(Edges)
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
           
        }
        vector<int>vis(n,0);//To ensure a visited node is not visited again and again
        int no_of_components=1;
        for(int i=0;i<n;i++){//O(NODES)
            if(!vis[i]){
                int sum=dfs(i,adj,vis,values,no_of_components,k);//O(Edges)
                
            }
        }
        return no_of_components;
        //Time Complexity:O(V+E)
        //Space Complexity:O(V+E)
        //Implement Depth first Search using the necessary condition to find the max components that are divisible by k
        
    }
};