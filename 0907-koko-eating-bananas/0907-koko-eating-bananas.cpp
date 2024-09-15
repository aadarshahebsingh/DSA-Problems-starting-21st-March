#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    long long maxi(vector<int>& arr) {
        long long maxim = arr[0];
        for (long long i = 1; i < arr.size(); i++)
            maxim = max(maxim, (long long)arr[i]);
        return maxim;
    }

    long long findHour(vector<int>& piles, long x) {
        long long ans = 0, n = piles.size();
        for (long long i = 0; i < n; i++) {
            ans += (piles[i] + x - 1) / x;  // Efficient ceiling division
        }
        return ans;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        long long low = 1, high = maxi(piles);
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long hour = findHour(piles, mid);
            if (hour <= h) high = mid - 1;
            else low = mid + 1;
        }
        return (int)low;
    }
};
