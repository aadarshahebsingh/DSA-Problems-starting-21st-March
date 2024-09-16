class Solution {
public:
    bool helper(const vector<int>& ans){
        vector<int> temp(ans);
        sort(temp.begin(),temp.end());
        int diff=temp[1]-temp[0];
        for(int i=2;i<temp.size();i++){
            if(temp[i]-temp[i-1]!=diff)return false;
        }
        return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        for(int i=0;i<l.size();i++){
            ans.push_back(helper(vector<int>(nums.begin()+l[i],nums.begin()+r[i]+1)));
        }
        return ans;
    }
};