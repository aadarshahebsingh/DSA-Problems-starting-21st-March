class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end());
        
        int ans = 0, currentLength = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == maxi) {
                currentLength++;
            } else {
                currentLength = 0;
            }
            ans = max(ans, currentLength);
        }
        return ans;
    }
};
