class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";

        int n = s.length();
        vector<vector<int>> memo(n, vector<int>(n, -1));
        string longest = "";
        findLongestPalindromicSubstring(s, 0, n - 1, memo, longest);
        return longest;
    }

private:
    void findLongestPalindromicSubstring(const string& s, int left, int right, vector<vector<int>>& memo, string& longest) {
        if (left > right) return;

        if (memo[left][right] != -1) {
            if (memo[left][right] == 1) {
                if (right - left + 1 > longest.length()) {
                    longest = s.substr(left, right - left + 1);
                }
            }
            return;
        }

        if (isPalindrome(s, left, right)) {
            memo[left][right] = 1;
            if (right - left + 1 > longest.length()) {
                longest = s.substr(left, right - left + 1);
            }
        } else {
            memo[left][right] = 0;
        }

        findLongestPalindromicSubstring(s, left + 1, right, memo, longest);
        findLongestPalindromicSubstring(s, left, right - 1, memo, longest);
    }

    bool isPalindrome(const string& s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) return false;
            ++left;
            --right;
        }
        return true;
    }
};
