class Solution {
public:
    int helper(vector<int>& arr, int maxSum) {
        int noOfSub = 1, currentSum = 0;
        for (int num : arr) {
            if (currentSum + num > maxSum) {
                noOfSub++;
                currentSum = num;
            } else {
                currentSum += num;
            }
        }
        return noOfSub;
    }

    int splitArray(vector<int>& nums, int k) {
        if (nums.size() < k) return -1;

        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        int result = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (helper(nums, mid) <= k) {
                result = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return result;
    }
};
