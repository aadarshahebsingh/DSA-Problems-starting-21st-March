class Solution {
public:
    int minDifference(vector<int>& nums) {

        if(nums.size() <= 4) return 0;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        int ans = INT_MAX;
        for(int i = 3; i >= 0; i--) ans = min(ans, nums[n-i-1] - nums[3-i]);
        return ans;
    }
};
