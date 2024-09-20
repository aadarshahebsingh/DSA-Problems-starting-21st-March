class Solution {
public:
    string shortestPalindrome(string s) {
        string rev_s = s;
        reverse(rev_s.begin(), rev_s.end());
        string new_s = s + "#" + rev_s;
        
        vector<int> lps(new_s.size(), 0);
        
        for (int i = 1; i < new_s.size(); ++i) {
            int j = lps[i - 1];
            
            while (j > 0 && new_s[i] != new_s[j]) {
                j = lps[j - 1];
            }
            
            if (new_s[i] == new_s[j]) {
                ++j;
            }
            
            lps[i] = j;
        }
        int longest_palindromic_prefix_len = lps.back();
        string suffix_to_add = s.substr(longest_palindromic_prefix_len);
        reverse(suffix_to_add.begin(), suffix_to_add.end());
        
        return suffix_to_add + s;
    }
};
