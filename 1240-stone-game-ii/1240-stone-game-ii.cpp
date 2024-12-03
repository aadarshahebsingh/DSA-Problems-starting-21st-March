class Solution {
public:

    int help(int idx, int m, int turn, vector<int>& psum, int (&dp)[101][101][2]){
        int n = psum.size()-1;
        if(idx==n) return 0;
        if(dp[idx][m][turn]!=-1) return dp[idx][m][turn];
        // turn = 0 -> alice
        // turn = 1 -> bob
        int alice=0,bob=0,a=0,b=0; 
        for(int i=idx;i<(idx+m) && i<n;i++){
            if(turn==0){
                bob = help(i+1,max(m,(2*(i-idx+1))),1,psum,dp);
                alice = (psum[i+1]-psum[idx])+(psum[n]-psum[i+1]-bob);
            }else{
                alice = help(i+1,max(m,(2*(i-idx+1))),0,psum,dp);
                bob = (psum[i+1]-psum[idx])+(psum[n]-psum[i+1]-alice);
            }
            a = max(alice,a);
            b = max(bob,b);
        }

        if(turn==0) return dp[idx][m][turn]=a;
        else return dp[idx][m][turn]=b;
    }

    int stoneGameII(vector<int>& piles) {
        int n = piles.size();
        vector<int> psum(n+1,0);
        for(int i=1;i<=n;i++) psum[i]=psum[i-1]+piles[i-1];
        int dp[101][101][2];
        memset(dp,-1,sizeof(dp));
        return help(0,2,0,psum,dp);
    }
};