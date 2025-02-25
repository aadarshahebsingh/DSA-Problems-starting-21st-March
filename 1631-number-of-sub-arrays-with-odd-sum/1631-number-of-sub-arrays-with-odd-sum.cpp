class Solution {
public:
    const int MOD = 1e9 + 7;
    
    int numOfSubarrays(vector<int>& arr) {
        int ans = 0;
        int odd = 0, even = 1; // even=1 for subarray starting from index 0
        int prefixSum = 0;
        
        for(int i = 0; i < arr.size(); i++) {
            prefixSum += arr[i];
            if(prefixSum % 2 == 0) {
                ans = (ans + odd) % MOD;
                even++;
            } else {
                ans = (ans + even) % MOD;
                odd++;
            }
        }
        
        return ans;
    }
};
