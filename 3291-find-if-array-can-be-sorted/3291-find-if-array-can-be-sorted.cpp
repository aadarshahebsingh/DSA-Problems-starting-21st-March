class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int length = nums.size();

        // Check all pairs of elements to see if they can be swapped to sort the array
        for (int i = 0; i < length; i++) {
            for (int j = i + 1; j < length; j++) {
                // If elements are out of order
                if (nums[j] < nums[i]) {
                    // Check if they have the same number of set bits (1s in binary representation)
                    if (__builtin_popcount(nums[i]) != __builtin_popcount(nums[j])) {
                        // If not, they cannot be swapped to sort the array
                        return false;
                    }

                    // Swap elements to move the smaller one forward
                    swap(nums[i], nums[j]);
                }
            }
        }

        // Final check to ensure the array is sorted
        for (int k = 0; k < length - 1; k++) {
            if (nums[k] > nums[k + 1]) {
                return false;
            }
        }

        return true;
    }
};