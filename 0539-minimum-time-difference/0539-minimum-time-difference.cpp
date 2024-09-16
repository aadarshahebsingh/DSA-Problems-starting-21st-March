class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int n = timePoints.size();
        vector<int> minutesVec(n);
        for (int i = 0; i < n; i++) {
            int hour = stoi(timePoints[i].substr(0, 2));
            int minutes = stoi(timePoints[i].substr(3));
            minutesVec[i] = hour * 60 + minutes;
        }
        sort(minutesVec.begin(), minutesVec.end());
        int mini = INT_MAX;
        for (int i = 0; i < minutesVec.size() - 1; i++) {
            mini = min(mini, minutesVec[i + 1] - minutesVec[i]);
        }
        mini = min(mini, 24 * 60 - minutesVec.back() + minutesVec.front());
        return mini;
    }
};
