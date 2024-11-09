class Solution {
public:
    long long minEnd(int n, int x) {
        bitset<64> arr(x),nums(n-1),ans=0;
        for(int i=0,j=0;i<56;i++){
            ans[i]=(arr[i])?1:nums[j++];
        }
        return ans.to_ullong();
    }
};