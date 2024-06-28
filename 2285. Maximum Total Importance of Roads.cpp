class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int> arr(n,0);
        for(auto& x:roads){
            arr[x[0]]++;
            arr[x[1]]++;
        }
        vector<int> nums(n);
        for(int i=0;i<n;i++)nums[i]=i;

        sort(nums.begin(),nums.end(),[&](int a,int b){
            return arr[a]>arr[b];
        });
        long long ans=0;
        for(int i=0;i<n;i++)ans+=(long long)(n-i)*arr[nums[i]];
        return ans;
    }
};
