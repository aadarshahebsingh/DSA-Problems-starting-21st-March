class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> arr;
        int ans=0;
        for(auto& x:heights)arr.push_back(x);
        sort(arr.begin(),arr.end());
        for(int i=0;i<heights.size();i++)
            if(heights[i]!=arr[i])ans++;
        return ans;
    }
};
