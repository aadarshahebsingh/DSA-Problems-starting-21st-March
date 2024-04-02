class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length())return false;
        vector<int> first(256,-1);
        vector<int> second(256,-1);
        for(int i=0;i<s.length();i++){
            char x=s[i];
            char y=t[i];
            if(first[x]!=second[y])return false;
            first[x]=i;
            second[y]=i;
        }
        return true;
    }
};
