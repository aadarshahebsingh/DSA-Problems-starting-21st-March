class Solution {
public:
    int maxDistance(vector<int>& arr, int m) {
        int ans=0;
        sort(arr.begin(),arr.end());
        int s=0,e=1e9;
        while(s<=e){
            int mid=(s+e)/2;
            int cnt=0,j=-1e9;
            for(int i=0;i<arr.size();i++){
                if(arr[i]-j >=mid){
                    cnt++;
                    j=arr[i];
                }
            }
            if(cnt>=m){
                ans=max(ans,mid);
                s=mid+1;
            }
            else e=mid-1;
        }
        return ans;
    }
};
