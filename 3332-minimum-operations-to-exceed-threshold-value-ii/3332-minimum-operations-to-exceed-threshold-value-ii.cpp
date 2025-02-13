class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>> mini(nums.begin(), nums.end());
        int cnt = 0;
        while (mini.size() > 1) {
            long long top = mini.top();
            mini.pop();
            if (top >= k) break;
            long long temp = mini.top();
            mini.pop();
            mini.push(2 * min(top, temp) + max(top, temp));
            cnt++;
        }
        return cnt;
    }
};
