class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        map<int,int>mp;
        int n=nums.size();
        int i=0,j=0,maxi=0;
        while(j<n)
        {
            mp[nums[j]]++;
            while(i<=j){
                auto it=mp.begin();
                auto is=mp.end();
                is--;
                if(abs(it->first-is->first)>limit){
                    mp[nums[i]]--;
                    if(mp[nums[i]]==0)
                     mp.erase(nums[i]);
                    i++;
                }
                else
                 break;
            }
            maxi=max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};
