class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        int n=nums.size();
        vector<vector<long long>> temp(n,vector<long long> (2,-1));
        return calculateMax(nums,n,k,0,1,temp);
    }
    long long calculateMax(vector<int>& nums,int n,int k,int currInd,int isEven,vector<vector<long long>>&temp){
        if(currInd==n)return isEven==1?0:LLONG_MIN;
        if(temp[currInd][isEven]!=-1)return temp[currInd][isEven];

        long long noXor=nums[currInd]+calculateMax(nums,n,k,currInd+1,isEven,temp);
        long long withXor=(nums[currInd]^k)+calculateMax(nums,n,k,currInd+1,!isEven,temp);

        long long ans=max(noXor,withXor);
        temp[currInd][isEven]=ans;
        return ans;
    }
};
