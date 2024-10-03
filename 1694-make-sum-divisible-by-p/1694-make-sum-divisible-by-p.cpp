class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int totalSum = 0;
        for (int num : nums) {
            totalSum = (totalSum + num) % p;
        }

        if (totalSum == 0) return 0;

        unordered_map<int, int> prefixMod;
        prefixMod[0] = -1;
        int prefixSum = 0, minLength = nums.size();

        for (int i = 0; i < nums.size(); ++i) {
            prefixSum = (prefixSum + nums[i]) % p;
            int targetMod = (prefixSum - totalSum + p) % p;

            if (prefixMod.find(targetMod) != prefixMod.end()) {
                minLength = min(minLength, i - prefixMod[targetMod]);
            }

            prefixMod[prefixSum] = i;
        }

        return minLength == nums.size() ? -1 : minLength;
    }
};
