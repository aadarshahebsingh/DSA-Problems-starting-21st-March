class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> sortedNums;
        for (int i = 0; i < nums.size(); i++) {
            sortedNums.push_back({nums[i], i});
        }
        sort(sortedNums.begin(), sortedNums.end());

        int left = 0, right = sortedNums.size() - 1;
        while (left < right) {
            int sum = sortedNums[left].first + sortedNums[right].first;
            if (sum == target) {
                return {sortedNums[left].second, sortedNums[right].second};
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
        return {};
    }
};