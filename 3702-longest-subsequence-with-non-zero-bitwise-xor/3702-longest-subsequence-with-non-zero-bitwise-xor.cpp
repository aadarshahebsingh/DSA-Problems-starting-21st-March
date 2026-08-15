class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size(),curr=0;
        bool hasZero=false;

        for(auto &x:nums){
            curr^=x;
            if(curr!=0){
                hasZero=true;
            }
        }
        if(curr!=0)return n;
        if(hasZero)return n-1;
        return 0;
    }
};