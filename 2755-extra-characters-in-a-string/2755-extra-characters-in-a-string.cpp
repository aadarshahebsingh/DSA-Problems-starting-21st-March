class Solution {
public:
    unordered_map<string,int> temp;
    unordered_map<string,int> dp;
    int helper(string str){
        if(str.size()==0)return 0;
        if(dp.find(str) != dp.end())return dp[str];
        int cnt=INT_MAX;
        string tmp="";
        for(int i=0;i<str.length();i++){
            tmp+=str[i];
            if(temp.find(tmp)!=temp.end()){
                cnt=min(cnt,helper(str.substr(i+1)));
            }
        }
        cnt=min(cnt,1+helper(str.substr(1)));
        dp[str]=cnt;

        return dp[str];

    
    
    
    
    }
    int minExtraChar(string s, vector<string>& dictionary) {
        for(auto &str:dictionary){
            temp[str]++;
        }
        return helper(s);
    }
};