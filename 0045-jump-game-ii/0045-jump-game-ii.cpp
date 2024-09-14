class Solution {
public:
    int jump(vector<int>& nums) {
        int temp=0,n=nums.size(),farthest=0,ans=0,currEnd=0;
        for(int i=0;i<n-1;i++){
            farthest=max(farthest,i+nums[i]);
            if(i==currEnd){
                ans++;
                currEnd=farthest;

                
                if(currEnd>=n-1){
                    break;
                }
            }
        }
        // return 0;
        return ans;
    }
};