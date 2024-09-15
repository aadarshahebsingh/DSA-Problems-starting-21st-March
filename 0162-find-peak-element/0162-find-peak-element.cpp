class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size()-1;i++){
            if(i>0 && nums[i]>nums[i-1] && nums[i]>nums[i+1])return i;
        }
        // if(nums[0]>nums[])
        int n=nums.size()-1;
        if(nums[0]>=nums[n])return 0;
        return n;
    }
};