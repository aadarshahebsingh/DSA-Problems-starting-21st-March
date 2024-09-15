class Solution {
public:
    int findtheday(vector<int> weight,int mid){
        int day=1,load=0,n=weight.size();
        for(int i=0;i<n;i++){
            if(load+weight[i]>mid){
                day=day+1;
                load=weight[i];
            }
            else{
                load+=weight[i];
            }
        }return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=INT_MIN;
        int high=0;
        for(auto k:weights){
            low=max(k,low);
            high=high+k;
        }
        while(low<=high){
            int mid=(low+high)/2;
            int noofdays=findtheday(weights,mid);
            if(noofdays<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }return low;

    }
};