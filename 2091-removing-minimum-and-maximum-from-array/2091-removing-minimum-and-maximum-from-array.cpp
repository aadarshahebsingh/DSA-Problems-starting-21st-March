class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 1;
    
        int mx=nums[0];
        int mn=nums[0];
        int i=0,j=0;
        for(int k=1;k<nums.size();k++){
            if(nums[k]>mx){
                mx=nums[k];
                i=k;
            }
            if(nums[k]<mn){
                mn=nums[k];
                j=k;
            }
        }
        int a=min(i,j);
        int b=max(i,j);

        return min({b+1, n-a, a+1+n-b});
    }
};