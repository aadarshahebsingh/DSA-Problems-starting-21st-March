class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> prefMax(n+1);
        vector<int> suffMin(n+1);
        prefMax[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            prefMax[i]=max(prefMax[i-1],nums[i]);
        }
        suffMin[nums.size()-1]=nums[nums.size()-1];
        for(int j=nums.size()-2;j>=0;j--){
            suffMin[j]=min(suffMin[j+1],nums[j]);
        }
        int maxi=-1;
        
        for(int i=0;i<nums.size();i++){
            cout<<prefMax[i]<<" "<<suffMin[i]<<endl;
            if(prefMax[i]-suffMin[i]<=k){
                return i;
            }
        }
        return -1;
    }
};