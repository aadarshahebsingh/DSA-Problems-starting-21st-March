class Solution {
public:
    int helper(vector<int>& nums,int goal){
        int l=0,r=0,sum=0,ans=0,n=nums.size();
        if(goal<0)return 0;
        while(r<n){
            sum+=nums[r];
            while(sum>goal){
                sum-=nums[l];
                l++;
            }
            ans+=(r-l+1);
            r++;
        }
        return ans;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return helper(nums,goal)-helper(nums,goal-1);
    }
};
