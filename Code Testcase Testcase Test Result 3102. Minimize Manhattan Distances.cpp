class Solution {
public:
    int minimumDistance(vector<vector<int>>& points) {
        multiset<int> x, y;
        for (auto p : points) {
            x.insert(p[0]-p[1]);
            y.insert(p[0]+p[1]);
        }
        int ans=1e9;
        for (auto p : points) {
            x.erase(x.find(p[0]-p[1]));
            y.erase(y.find(p[0]+p[1]));
            ans=min(ans, max(*x.rbegin()-*x.begin(), *y.rbegin()-*y.begin()));
            x.insert(p[0]-p[1]);
            y.insert(p[0]+p[1]);
        }
        return ans;
    }
};
