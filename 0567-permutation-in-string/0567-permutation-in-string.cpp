#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        
        if (n > m) return false;

        vector<int> freq_s1(26, 0), freq_window(26, 0);

        for (int i = 0; i < n; i++) {
            freq_s1[s1[i] - 'a']++;
            freq_window[s2[i] - 'a']++;
        }

        for (int i = n; i < m; i++) {
            if (freq_s1 == freq_window) return true;
            freq_window[s2[i] - 'a']++;
            freq_window[s2[i - n] - 'a']--;
        }

        return freq_s1 == freq_window;
    }
};
