class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        int n=nums.size();
        if(n<=1)return n;
        long long cnt=1,result=1;
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1])cnt++;
            else cnt=1;
            result+=cnt;
        }
        return result;
    }
};
