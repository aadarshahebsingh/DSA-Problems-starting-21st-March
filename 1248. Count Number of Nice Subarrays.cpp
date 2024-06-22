class Solution {
public:
    int helper(vector<int>& nums, int n, int k) {
        if (k < 0) return 0;
        int ans = 0;
        int s = 0, e = 0, sum = 0;
        while (e < n) {
            if (nums[e] % 2 == 1) sum++;
            while (sum > k) {
                if (nums[s] % 2 == 1) sum--;
                s++;
            }
            ans += (e - s + 1);
            e++;
        }
        return ans;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        return helper(nums, n, k) - helper(nums, n, k - 1);
    }
};
