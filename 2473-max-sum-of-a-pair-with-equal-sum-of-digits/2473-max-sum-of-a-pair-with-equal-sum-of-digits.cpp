class Solution {
public:
    int findSum(int x){
        int sum = 0, temp = x;
        while(temp){
            sum += temp % 10;
            temp /= 10;
        }
        return sum;
    }

    int maximumSum(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;
        
        for(int i = 0; i < nums.size(); i++){
            int digitSum = findSum(nums[i]);
            mp[digitSum].push_back(nums[i]);
        }

        int maxSum = -1;

        for(auto& [key, values] : mp){
            if(values.size() > 1){
                sort(values.rbegin(), values.rend()); 
                maxSum = max(maxSum, values[0] + values[1]); 
            }
        }

        return maxSum;
    }
};


