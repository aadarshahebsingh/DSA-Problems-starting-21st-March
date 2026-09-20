class Solution {
public:
    int reverseDegree(string s) {
        int res = 0;

        for(int i = 0; i < s.length(); i++) {
            int prod = (26 - (s[i] - 'a')) * (i + 1);
            res += prod;
        }

        return res;
    }
};