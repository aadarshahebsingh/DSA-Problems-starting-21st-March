class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int x=k;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x)x+=k;
        }
        return x;
    }
};