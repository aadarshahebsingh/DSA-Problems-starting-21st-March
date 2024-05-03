class Solution {
public:
    void splitString(const std::string& str, std::vector<int>& result) {
        std::string temp;
        for (char c : str) {
            if (c == '.') {
                result.push_back(std::stoi(temp));
                temp.clear();
            } else {
                temp += c;
            }
        }
        if (!temp.empty()) result.push_back(std::stoi(temp));
    }
    int compareVersion(std::string version1, std::string version2) {
        // Making 2 vectors by splitting the strings...

        std::vector<int> vec1, vec2;
        splitString(version1, vec1);
        splitString(version2, vec2);

        // Tackling the unequal length issue...

        int maxLen = std::max(vec1.size(), vec2.size());
        while (vec1.size() < maxLen) vec1.push_back(0);
        while (vec2.size() < maxLen) vec2.push_back(0);

        // The easiest part, comparing index by index
        for (int i = 0; i < maxLen; ++i) {
            if (vec1[i] < vec2[i]) return -1;
            else if (vec1[i] > vec2[i]) return 1;
        }
        return 0;
    }

};
