#include <vector>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0; 
        
        int i = 0, j = 0;
        int minLength = INT_MAX;
        int temp = 0;

        while (j < n) {
            temp += nums[j];
            
            while (temp >= target) {
                minLength = min(minLength, j - i + 1);
                temp -= nums[i];
                i++;
            }
            
            j++;
        }
        
        return minLength == INT_MAX ? 0 : minLength;
    }
};
