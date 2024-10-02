class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.size()==0)return {};
        set<int> theSort(arr.begin(),arr.end());

        unordered_map<int,int> mp;

        int pos=1;
        for(auto num:theSort){
            mp[num]=pos;
            pos++;
        }
        vector<int> ans(arr.size());
        for(int i=0;i<arr.size();i++){
            ans[i]=mp[arr[i]];
        }
        return ans;
    }
};