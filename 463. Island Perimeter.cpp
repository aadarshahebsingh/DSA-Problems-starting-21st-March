class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans=0;
        int rows=grid.size(),col=grid[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    ans+=4;
                    if(i>0 && grid[i-1][j]==1)ans-=2;
                    if(j>0 && grid[i][j-1]==1)ans-=2;
                }
            }
        }return ans;
    }
};
