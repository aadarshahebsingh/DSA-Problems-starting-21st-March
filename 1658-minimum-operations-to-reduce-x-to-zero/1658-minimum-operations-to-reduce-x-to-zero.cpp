class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int totalSum = 0;

        for(int i = 0; i<n; i++){
            totalSum = totalSum + nums[i];
        }

        if (totalSum < x) {
            return -1;
        }


        int target = totalSum - x;

        int left = 0;
        int right = 0;
        int maxLen = -1;
        int sum = 0;

        while(right < n){
            sum = sum + nums[right];

            while(sum > target){
                sum = sum - nums[left];
                left++;
            }

            if(sum == target){
                maxLen = max(maxLen, right - left + 1);
            }

            right++;
        }

        if(maxLen == -1){
            return -1;
        }
        
        return n - maxLen;
    }
};