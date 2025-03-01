class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        vector<int> arr;
        int zeroes = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                arr.push_back(nums[i] * 2);
                nums[i + 1] = 0;
            } else {
                arr.push_back(nums[i]);
            }
        }
        arr.push_back(nums[nums.size() - 1]);

        vector<int> result;
        for (int num : arr) {
            if (num != 0) result.push_back(num);
            else zeroes++;
        }

        while (zeroes--) result.push_back(0);

        return result;
    }
};
