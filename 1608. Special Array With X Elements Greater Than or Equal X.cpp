class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int l=0,r=n;
        while(l<=r){
            int mid=(l+r)/2;
            int x=0;
            for(int i=0;i<n;i++)x+=(nums[i]>=mid);

            if(x==mid)return x;
            if(x>mid)l=mid+1;
            else r=mid-1;
        }
        return -1;
    }
};
