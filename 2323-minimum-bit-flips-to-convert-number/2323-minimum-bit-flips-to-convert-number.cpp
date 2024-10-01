class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = 0;
        while(start or goal){
            ans += ((start % 2) != (goal % 2));
            start /= 2;
            goal /= 2;
        }
        return ans;
    }
};