class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int i=0,n=arr.size(),j=n-1;
        while(i<j){
            cout<<i<<" "<<j<<endl;
            if(arr[i]+arr[j]==target)break;
            else if(arr[i]+arr[j]<target)i++;
            else if(arr[i]+arr[j]>target)j--;
        }
        vector<int> ans;
        ans.push_back(i+1);ans.push_back(j+1);
        return ans;
    }
};
