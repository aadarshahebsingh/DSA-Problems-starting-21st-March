class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> prefMax(n+1);
        vector<int> suffMin(n+1);
        prefMax[0]=nums[0];
        for(int i=1;i<n;i++){
            prefMax[i]=max(prefMax[i-1],nums[i]);
        }
        suffMin[nums.size()-1]=nums[n-1];
        for(int j=n-2;j>=0;j--){
            suffMin[j]=min(suffMin[j+1],nums[j]);
        }
        int maxi=-1;
        
        for(int i=0;i<n;i++){
            if(prefMax[i]-suffMin[i]<=k){
                return i;
            }
        }
        return -1;
    }
};