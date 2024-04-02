class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int ans=0,buy=-prices[0];
        for(int i=1;i<prices.size();i++){
            int nBuy=max(buy,ans-prices[i]);
            int nSell=max(ans,prices[i]+buy-fee);
            buy=nBuy;
            ans=nSell;
        }
        return ans;
    }
};
