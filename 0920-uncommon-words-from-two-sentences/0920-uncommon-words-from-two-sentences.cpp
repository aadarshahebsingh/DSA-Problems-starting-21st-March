class Solution {
public:
    void helper(string& s,unordered_map<string,int>& wordCnt){
        stringstream ss(s);
        string str;
        while(ss>>str){
            wordCnt[str]++;
        }

    }
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> wordCnt;

        helper(s1,wordCnt);
        helper(s2,wordCnt);

        vector<string> ans;
        for(auto x:wordCnt){
            if(x.second==1)
                ans.push_back(x.first);
        }
        return ans;

    }
};