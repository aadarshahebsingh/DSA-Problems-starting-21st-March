class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>> ans;
        int n=land.size(),m=land[0].size();
        auto findFarm=[&](int row,int col){
            vector<int> temp={row,col};
            int r=row,c=col;
            while(r<n && land[r][col]==1)r++;
            while(c<m && land[row][c]==1)c++;

            temp.push_back(r-1);
            temp.push_back(c-1);

            for(int i=row;i<=r-1;i++){
                for(int j=col;j<=c-1;j++)land[i][j]=0;
            }
            return temp;
        };
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(land[i][j]==1)ans.push_back(findFarm(i,j));
            }
        }
        return ans;
    }
};
