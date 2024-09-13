class Solution {
public:
    int findMin(vector<int>& nums) {
        int greater=0,ind=-1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                ind=i;
                greater++;
            }
            
        }
        if(greater>0)return nums[ind+1];
        return nums[0];
        
    }
};