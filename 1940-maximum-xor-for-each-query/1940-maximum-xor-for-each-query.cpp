class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n=nums.size(),temp=nums[0],maxi=pow(2,maximumBit)-1;
        for(int i=1;i<n;i++){
            temp^=nums[i];
        }
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[i]=temp^maxi;
            temp^=nums[n-1-i];
        }
        return ans;
    }
};