// Using map
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int> mp;
        vector<int> arr;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto i=mp.begin();i!=mp.end();i++){
            if(i->second>1)arr.push_back(i->first);
        }
        return arr;
    }
};
