class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        stack<int> st;
        vector<int> res(n);
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && prices[i]<st.top()){
                st.pop();
            }
            if(st.empty()) res[i] = prices[i];
            else res[i] = prices[i] - st.top();
            st.push(prices[i]);
        }
        return res;
    }
};