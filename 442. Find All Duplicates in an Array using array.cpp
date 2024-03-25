class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> arr(nums.size() + 1, 0);
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]++;
            maxi=max(maxi,nums[i]);
        }
        vector<int> a;
        for(int i=0;i<=maxi;i++){
            if(arr[i]>1)a.push_back(i);
        }
        return a;
    }
};
