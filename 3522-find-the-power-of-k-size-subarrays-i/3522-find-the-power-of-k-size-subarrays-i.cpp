class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 1 || k == 1) return nums;

        vector<int>ans;
        int count = 0;
        for(int i = 1; i < k; i++){
            if(nums[i-1] + 1 != nums[i]) {
                nums[i-1] = -1;
                count++;
            }
        }
        if(count > 0) ans.push_back(-1);
        else ans.push_back(nums[k-1]);

        int i = 0;
        for(int j = k; j < n; j++){
            if(nums[i] == -1) count--;
            if(nums[j-1] + 1 != nums[j]){
                nums[j-1] = -1;
                count++;
            }
            i++;
            if(count > 0) ans.push_back(-1);
            else ans.push_back(nums[j]);
        }
        return ans;
    }
};