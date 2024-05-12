class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>> ans(n-2,vector<int> (n-2));
        for(int i=1;i<n-1;i++){
            for(int j=1;j<n-1;j++){
                int maxi=0;
                for(int p=i-1;p<=i+1;p++){
                    for(int q=j-1;q<=j+1;q++){
                        maxi=max(maxi,grid[p][q]);
                    }
                }
                ans[i-1][j-1]=maxi;
            }
        }
        return ans;
    }
};
