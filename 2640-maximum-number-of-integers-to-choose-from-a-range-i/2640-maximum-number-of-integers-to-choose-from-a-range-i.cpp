class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int sum = 0, ans = 0;
        sort(banned.begin(), banned.end());
        set<int> st(banned.begin(), banned.end());
        for (int i = 1; i <= n; i++) {
            if (st.find(i) == st.end()) { 
                if (i + sum <= maxSum) {
                    sum += i;
                    ans++;
                }
            }
        }
        return ans;
    }
};
