class Solution {
public:
    int helper(int ind1,int ind2,string &str1,string &str2,int n1,int n2,vector<vector<int>> &dp){
        if(ind1==n1 || ind2==n2)
            return 0;
        if(dp[ind1][ind2]!=-1)return dp[ind1][ind2];
        if(str1[ind1]==str2[ind2])
            return dp[ind1][ind2]=1+helper(ind1+1,ind2+1,str1,str2,n1,n2,dp);

        int left=helper(ind1+1,ind2,str1,str2,n1,n2,dp);
        int right=helper(ind1,ind2+1,str1,str2,n1,n2,dp);

        return dp[ind1][ind2]=max(left,right);
    }
    int minInsertions(string s) {
        string str=s;
        int n=s.length();
        reverse(str.begin(),str.end());
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        int temp=helper(0,0,s,str,n,n,dp);
        return n-temp;
    }
};
