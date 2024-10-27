class Solution {
public:
    int  dp[500][500];
    int helper(int i,int j,vector<vector<int>>& arr){
        if(i<0 || j<0 || arr[i][j]==0)return 0;

        if(dp[i][j]!=-1)
            return dp[i][j];
        return dp[i][j]=1+min({helper(i-1,j,arr),helper(i-1,j-1,arr),helper(i,j-1,arr)});
    }
    int countSquares(vector<vector<int>>& matrix) {
        int row=matrix.size(),col=matrix[0].size();
        memset(dp,-1,sizeof(dp));
        int ans=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                ans+=helper(i,j,matrix);
            }
        }
        return ans;
    }
};