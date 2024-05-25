class Solution {
public:
    vector<string> ans;
    void helper(int i,string &str,string& s,unordered_map<string,bool> &exist){
        if(i>=s.size()){
            ans.push_back(str);
            return;
        }
        for(int j=i+1;j<=i+10 && j<=s.size();j++){
            string temp=s.substr(i,j-i);
            if(exist.find(temp)!=exist.end()){
                if(str.size()==0)str=temp;
                else str+=" "+temp;
                helper(j,str,s,exist);
                int x=0;
                while(x<temp.size()){
                    x++;
                    str.pop_back();
                }
                if(str.size()>0)str.pop_back();
            }
        }
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        string str="";
        unordered_map<string,bool> exist;
        for(auto x:wordDict)exist[x]=true;

        ans.clear();
        helper(0,str,s,exist);
        return ans;
    }
};
