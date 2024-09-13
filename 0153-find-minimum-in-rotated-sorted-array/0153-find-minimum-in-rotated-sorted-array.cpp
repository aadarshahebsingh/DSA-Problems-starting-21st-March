class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini=nums[0],s=0,e=nums.size()-1;
        while(s<=e){
            int mid=(e-s)/2+s;
            mini=min(min(mini,nums[s]),nums[mid]);
            if(nums[mid]>=nums[s]){
                s=mid+1;
            }
            else e=mid-1;
        }
        return mini;
    }
};