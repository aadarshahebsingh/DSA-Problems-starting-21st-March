class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        // return 9;
        int n=nums.size(),maxi=0;
        vector<int> longestIs(n,1);
        vector<int> longestDs(n,1);
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j])
                    longestIs[i]=max(longestIs[i],longestIs[j]+1);
            }
        }
        
        for(int i=n-1;i>=0;i--){
            for(int j=n-1;j>i;j--){
                if(nums[i]>nums[j])
                    longestDs[i]=max(longestDs[i],longestDs[j]+1);
            }
        }
        
        for(int i=1;i<n-1;i++){
            if(longestIs[i]>1 && longestDs[i]>1)
                maxi=max(maxi,longestIs[i]+longestDs[i]-1);
        }
        return n-maxi;
    }
};