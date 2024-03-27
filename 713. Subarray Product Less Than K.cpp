class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k==0)return 0;
        int n=nums.size(),pro=1,cnt{};
        int l=0,r=0;
        while(r<n){
            pro*=nums[r];
            r++;
            while(l<r && pro>=k)
                pro=pro/nums[l++];
            cnt+=(r-l);
        }
        return cnt;
    }
};
