class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> r;
        int currSum=0;
        r[0]=-1;
        for(int i=0;i<nums.size();i++){
            currSum+=nums[i];
            int rem=currSum%k;
            if(r.find(rem)!=r.end()){
                if(i-r[rem]>=2)return true;
            }
            else r[rem]=i;
        }
        return false;
    }
};
