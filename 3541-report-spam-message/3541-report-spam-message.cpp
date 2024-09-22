class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        int ban=0;
        set<string> s(bannedWords.begin(),bannedWords.end());
        for(auto str:message){
            if(s.find(str)!=s.end()){
                ban++;
                if(ban>=2)return true;
            }
        }
        // if(ban>1)return true;
        return false;
    }
};