class Solution {
public:
    vector<pair<int,int>> dir={{0,1},{1,0},{0,-1},{-1,0}};
    int helper(int row,int col,vector<vector<int>>& grid,int n,int m){
        int temp=grid[row][col],curr=grid[row][col];
        grid[row][col]=0;
        for(int i=0;i<4;i++){
            int newR=row+dir[i].first;
            int newC=col+dir[i].second;
            if(newR>=0 && (newR<n) && (newC>=0) && (newC<m) && (grid[newR][newC]))
                temp=max(temp,curr+helper(newR,newC,grid,n,m));

        }
        grid[row][col]=curr;
        return temp;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int ans=0,n=grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j])
                    ans=max(ans,helper(i,j,grid,n,m));
            }
        }
        return ans;
    }
};
