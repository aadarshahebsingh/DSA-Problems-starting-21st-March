class Solution {
public:
    int m,n;
    int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
    void dfs(int i,int j,vector<vector<char>>& grid,vector<vector<int>>& vis,char ch){
        vis[i][j]=1;
        for(int x=0;x<4;x++){
            int xi=dir[x][0]+i,xj=dir[x][1]+j;
            if(xi>=0 && xi<m && xj>=0 && xj<n && grid[xi][xj]==ch && !vis[xi][xj]){
                dfs(xi,xj,grid,vis,ch);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        m=grid.size(),n=grid[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1' && !vis[i][j]){
                    ans++;
                    cout<<i<<" "<<j<<endl;
                    dfs(i,j,grid,vis,grid[i][j]);
                }
                else if(grid[i][j]=='0' && !vis[i][j]){
                    dfs(i,j,grid,vis,grid[i][j]);
                }
            }
        }
        return ans;
    }
};
