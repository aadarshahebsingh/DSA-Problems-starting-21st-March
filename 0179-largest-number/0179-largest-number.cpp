class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> arr;
        for(auto x:nums){
            arr.push_back(to_string(x));
        }
        sort(arr.begin(),arr.end(),[](const string&a,const string &b){
            return (b+a)<(a+b);
        });
        if(arr[0]=="0")return "0";

        string ans;
        for(auto &x:arr)ans+=x;
        return ans;
    }
};