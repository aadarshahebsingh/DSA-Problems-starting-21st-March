class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int left = 0;
        int right = 1;
        int count = 1;
        int maximum = 1;
        while (right < n) {
            if (nums[right] - nums[left] <= 2 * k) {
                right++;
                count++;
                maximum = max(maximum, count);
            } else if (nums[right] - nums[left] > 2 * k) {
                left++;
                count--;
            }
        }
        return maximum;
    }
};