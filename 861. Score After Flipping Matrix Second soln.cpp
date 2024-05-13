class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        // for the first colmn change all the bits to 1
        int n=grid.size(),m=grid[0].size();
        int ans=n*(1<<(m-1));
        
        for(int i=1;i<m;i++){
            int oneCnt=0;
            for(int j=0;j<n;j++){
                oneCnt+=grid[j][0]==0? (grid[j][i]^1):grid[j][i];

            }
            if(oneCnt<n-oneCnt)ans+=(n-oneCnt)*(1<<(m-1-i));
            else ans+=(oneCnt)*(1<<(m-1-i));
        }
        return ans;
    }
};
