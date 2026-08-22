/*
    coins whose any factor is already

    there we dont care about that

    because their factors already 

    form all its factors.

    3, 4 : 

    3, 6, 9, 12, 15, ...

    4, 8, 12, 16,....

    A, B, C, D, E,....

    A + B + C + D + E 

    - (A int B) - (B int C) ..

    + (A int B int C) + ....

    - (A int B int C int D)...

    + (A int B int C int D int E)

    so we need all the mask's 

    possible.. 

    and then if the no of set 

    bits in the mask is even

    then we subtract the 

    contribution.. 

    else we add the contribution..



*/
class Solution {
public:
    int n;
    bool possible(long long mid, vector<int>& arr, int k) {
        long long before = 0;
        for(long long mask = 1; mask <= ((1 << n) - 1); mask++) {
            // now if the mask set bits are odd then add else remove.. 
            int set_bits = __builtin_popcount(mask);
            bool add = false;
            if(set_bits & 1) {
                add = 1;
            }
            long long curr = 1;
            for(int i = 0; i < n; i++) {
                if(mask & (1 << i)) {
                    curr = lcm(curr, arr[i]);
                }
            }
            long long times = mid / curr;
            if(add) before += times;
            else before -= times;

        }
        return (before >= k);

    }
    long long findKthSmallest(vector<int>& coins, int k) {
        n = coins.size();
        long long low = 1, high = 1e11;
        long long res = high;
        while(low <= high) {
            long long mid = (low + high) / 2;
            if(possible(mid, coins, k)) {
                res = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return res;
        
    }
};