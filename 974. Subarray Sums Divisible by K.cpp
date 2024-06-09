class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans=0,prefixSum=0;
        unordered_map<int,int> pM;
        pM[0]=1;
        for(int num:nums){
            prefixSum+=num;
            int rem=prefixSum%k;
            if(rem<0)rem+=k;
            if(pM.find(rem)!=pM.end()){
                ans+=pM[rem];
                pM[rem]+=1;
            }
            else pM[rem]=1;
        }
        return ans;
    }
};
