class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long int ans=0,maxi=0,i=0,s=nums.size();
        while(maxi<n){
            if((i<s) && (maxi+1 >= nums[i])){
                maxi+=nums[i];
                i++;
            }
            else{
                ans++;
                maxi+=(maxi+1);
            }
        }return ans;
    }
};
