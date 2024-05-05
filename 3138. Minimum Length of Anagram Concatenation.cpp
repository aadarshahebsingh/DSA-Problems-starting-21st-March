class Solution {
public:
    int minAnagramLength(string s) {
        unordered_map<char, int> freq;
        for (char ch : s) {
        freq[ch]++;
    }

    int maxFreq = 0;
    for (const auto& pair : freq) {
        maxFreq = max(maxFreq, pair.second);
    }

    int gcdFreq = 0;
    for (const auto& pair : freq) {
        gcdFreq = gcd(gcdFreq, pair.second);
    }

    int ans = s.length() / gcdFreq;

    return ans;
        }
};
