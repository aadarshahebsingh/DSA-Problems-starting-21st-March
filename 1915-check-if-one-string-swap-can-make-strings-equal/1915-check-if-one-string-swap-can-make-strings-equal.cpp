class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2)return true;
        int x1=-1,x2=-1,cnt=0;
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i]){
                if(x1==-1)x1=i;
                else{
                    x2=i;
                }
                cnt++;
                if(cnt>2)return false;
            }
        }
        if(cnt==1)return false;
        if(s2[x1]==s1[x2] && s2[x2]==s1[x1])return true;
        // if(s1==s2)return true;
        return false;
    }
};