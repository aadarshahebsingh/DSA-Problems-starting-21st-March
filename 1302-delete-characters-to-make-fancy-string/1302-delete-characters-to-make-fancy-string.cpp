class Solution {
public:
    string makeFancyString(string s) {
        // return "";
        if(s.length()<2)return s;
        string ans="";
        int i;
        for(i=0;i<s.length()-2;){
            if(s[i]==s[i+1] && s[i]==s[i+2]){
                i++;
                // flag=true;
            }
            else{
                ans+=s[i];
                i++;
                // flag=false;
            }
        }
        // if(!flag){
            ans+=s[i];
            i++;
            ans+=s[i];
        // }
        // else{

        // }
        return ans;
    }
};