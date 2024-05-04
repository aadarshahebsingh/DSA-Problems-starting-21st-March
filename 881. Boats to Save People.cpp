class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        sort(arr.begin(),arr.end());
        int ans=0,x=arr[0],n=arr.size();
        for(int i=0,j=n-1;i<=j;j--){
            ans++;
            if(arr[i]<=limit-arr[j])i++;
        }
        return ans;
    }
};
