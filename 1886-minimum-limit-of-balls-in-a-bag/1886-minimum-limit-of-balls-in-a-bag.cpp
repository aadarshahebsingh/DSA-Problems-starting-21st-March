class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int n=nums.size();
        int left=1,right=*max_element(nums.begin(),nums.end()),mid;
        while(left<right){
            mid=left+(right-left)/2;
            long long cnt=0;
            for(int j=0;j<n && cnt<=maxOperations;j++){
                cnt+=(nums[j]-1)/mid;
            }
            if(cnt<=maxOperations)right=mid;
            else left=mid+1;
        }
        return right;
    }
};