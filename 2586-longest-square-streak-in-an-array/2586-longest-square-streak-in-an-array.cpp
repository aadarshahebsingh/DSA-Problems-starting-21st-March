class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        int ans=-1,n=nums.size();
        map<int,int> mp;
        sort(nums.begin(),nums.end());
        for(int x:nums){
            int sq=sqrt(x);
            if(sq*sq==x && mp.find(sq)!=mp.end()){
                mp[x]=mp[sq]+1;
                ans=max(ans,mp[x]);
            }
            else mp[x]=1;
        }
        return ans;
    }
};