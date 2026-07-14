class Solution {
public:
    vector<string> letters={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> ans;
    void helper(int i,string &digits,string temp){
        if(i==digits.size()){
            ans.push_back(temp);
            return;
        }
        for(auto &x:  letters[digits[i]-'0']   ){
            helper(i+1,digits,temp+x);
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits=="")return {};
        helper(0,digits,"");
        return ans;
    }
};