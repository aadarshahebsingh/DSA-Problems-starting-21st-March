class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=INT_MIN,currP=1;
        for(int i=0;i<nums.size();i++){
            currP*=nums[i];
            maxi=max(maxi,currP);
            if(currP==0)currP=1;
        }
        currP=1;
        for(int i=nums.size()-1;i>=0;i--){
            currP*=nums[i];
            maxi=max(maxi,currP);
            if(currP==0)currP=1;
        }
        return maxi;
    }
};