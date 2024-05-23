class Solution {
public:
    int dfs(vector<int>& nums,int i,int k,unordered_map<int,int> &mp){
        if(i==nums.size())return 1;

        int taken=0;
        if(!mp[nums[i]-k] && !mp[nums[i]+k]){
            mp[nums[i]]++;
            taken=dfs(nums,i+1,k,mp);
            mp[nums[i]]--;
        }
        int notTaken=dfs(nums,i+1,k,mp);
        return taken+notTaken;
    }
    int beautifulSubsets(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int ans=dfs(nums,0,k,mp);
        return ans-1;
    }
};
