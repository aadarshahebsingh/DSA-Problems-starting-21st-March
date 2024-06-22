class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> mp;
        mp[0]=1;
        int preSum=0,cnt=0,n=nums.size();
        for(int i=0;i<n;i++){
            preSum+=nums[i];
            int rem=preSum-k;
            cnt+=mp[rem];
            mp[preSum]+=1;
        }
        return cnt;
    }
};
