class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int s=heights.size();
        unordered_map<int,string> map;
        for(int i=0;i<s;i++)
            map[heights[i]]=names[i];
        sort(heights.rbegin(),heights.rend());
        for(int i=0;i<s;i++)
            names[i]=map[heights[i]];
        return names;
    }
};
