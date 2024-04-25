class Solution {
public:
    int longestIdealString(string s, int k) {
        int dp[27]={0};
        int n=s.length();
        for(int i=n-1;i>=0;i--){
            char c=s[i];
            int id=c-'a';
            int maxi=-INT_MAX;
            int left=max((id-k),0);
            int right=min((id+k),26);

            for(int j=left;j<=right;j++)maxi=max(maxi,dp[j]);
            dp[id]=maxi+1;
        }
        int maxi=INT_MIN;
        for(int i=0;i<27;i++){
            if(dp[i]>maxi)maxi=dp[i];

        }
        return maxi;
    }
};
