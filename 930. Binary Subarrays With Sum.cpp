class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        map<int,int> mp;
        int n=nums.size(),ans=0,preSum=0;
        mp[0]=1;
        for(int i=0;i<n;i++){
            preSum+=nums[i];
            int rem=preSum-goal;
            ans+=mp[rem];
            mp[preSum]+=1;
        }
        return ans;
    }
};
