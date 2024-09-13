class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MIN,ans=0;
        mini=prices[0];
        for(int i=1;i<prices.size();i++){
            mini=min(mini,prices[i]);
            ans=max(ans,prices[i]-mini);
        }
        return ans;
    }
};