class Solution {
public:
    string res;
    bool build(unordered_set<string>&numbers,string& curr,int& n){
        if(curr.size()==n){
            if(numbers.count(curr)==0){
                res=curr;
                return true;
            }
            return false;
        }
        curr.push_back('0');
        if(build(numbers,curr,n))return true;
        curr.pop_back();

        curr.push_back('1');
        if(build(numbers,curr,n))return true;
        curr.pop_back();
        return false;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums[0].length();
        unordered_set<string> numbers(nums.begin(),nums.end());
        string curr="";
        build(numbers,curr,n);
        return res;
    }
};