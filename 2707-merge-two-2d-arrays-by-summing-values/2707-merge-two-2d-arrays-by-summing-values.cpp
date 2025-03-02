class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> arr;
        int i=0,j=0;
        for(i=0,j=0;i<nums1.size()&&j<nums2.size();){
            if(nums1[i][0]==nums2[j][0]){
                arr.push_back({nums1[i][0],nums1[i][1]+nums2[j][1]});
                i++;j++;
            }
            else if(nums1[i][0]<nums2[j][0]){
                arr.push_back({nums1[i][0],nums1[i][1]});
                i++;
            }
            else if(nums1[i][0]>nums2[j][0]){
                arr.push_back({nums2[j][0],nums2[j][1]});
                j++;
            }
        }
        if(i!=nums1.size()){
            while(i!=nums1.size()){
                arr.push_back({nums1[i][0],nums1[i][1]});
                i++;
            }
        }
        if(j!=nums2.size()){
            while(j!=nums2.size()){
                arr.push_back({nums2[j][0],nums2[j][1]});
                j++;
            }
        }
        return arr;
    }
};