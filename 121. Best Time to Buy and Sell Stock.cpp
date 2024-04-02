class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int small=INT_MAX,prevDiff=0,n=prices.size();
        for(int i=0;i<n;i++){
            if(prices[i]<small){
                small=prices[i];
                continue;
            }
            int diff=prices[i]-small;
            if(prevDiff<diff && diff>0)prevDiff=diff;
        }
        return prevDiff;
    }
};
