class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low=0,high=arr.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            // ab hmlog ko dekhna h ki kya  missing number jo h wo range me h?
            int missing =arr[mid]-(mid+1);

            if(missing<k)low=mid+1;
            else high=mid-1;
        }
        return low+k;
    }
};