class Solution {
public:
    int dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    // int bfs(mat) {}
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        int m=mat.size(),n=mat[0].size();
        vector<vector<int>> ans(m,vector<int>(n,INT_MAX));
        
        queue<pair<int,int>> q;

        // push all 0's in the ans and other INT_MAX and position of 0s in the matrix
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    ans[i][j]=0;
                    q.push({i,j});
                }
            }
        }

        while(!q.empty()){

            auto [i,j]=q.front();
            q.pop();

            for(auto &x:dir){
                int ni=i+x[0],nj=j+x[1];

                if(ni>=0 && ni<m && nj>=0 && nj<n && ans[ni][nj]>ans[i][j]+1){
                    ans[ni][nj]=ans[i][j]+1;
                    q.push({ni,nj});
                }
            }
        }

        return ans;
    }
};