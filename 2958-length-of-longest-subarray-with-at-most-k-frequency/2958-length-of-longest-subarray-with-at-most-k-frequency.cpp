class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();

        int ans = 0;
        unordered_map<int, int> freq;

        for (int l = 0, r = 0; r < n; r++) {
            int temp = nums[r];

            auto it = freq.find(temp);
            int f;

            if (it == freq.end()) {
                freq[temp] = 1;
                f = freq[temp];
            } else {
                ++(it->second);
                f = it->second;
            }

            while (f > k) {
                freq[nums[l++]]--;
                f = freq[temp];  // update f
            }

            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};