class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        
        int n = intervals.size();
        int res[10000001] = {0};

        for(int i=0; i<n; i++)
        {
            res[intervals[i][0]]++;
            res[intervals[i][1]+1]--;
        }

        int maxi = -1;

        for(int i=1; i<10000001; i++)
        {
            res[i] += res[i-1];
            maxi = max(maxi, res[i]);
        }

        return maxi;
    }
};