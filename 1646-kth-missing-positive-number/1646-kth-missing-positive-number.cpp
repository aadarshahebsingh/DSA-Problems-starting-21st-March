class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int ans=k;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=ans)ans++;
            else break;
        }
        return ans;
    }
};