class Solution {
public:
    int dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int curr=image[sr][sc];
        int m=image.size(),n=image[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        queue<pair<int,int>> q;
        q.push({sr,sc});
        while(!q.empty()){
            auto [i,j]=q.front();
            q.pop();
            vis[i][j]=1;
            image[i][j]=color;
            for(int k=0;k<4;k++){
                int nr=i+dir[k][0],nc=j+dir[k][1];
                if(nr>=0 && nr<m && nc>=0 && nc<n && !vis[nr][nc] && image[nr][nc]==curr){
                    q.push({nr,nc});
                    vis[nr][nc]=1;
                    image[nr][nc]=color;
                }
            }
        }
        return image;
    }
};