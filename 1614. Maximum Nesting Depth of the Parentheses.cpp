class Solution {
public:
    int maxDepth(string s) {
        int ans=0,temp=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')temp++;
            else if(s[i]==')'){
                ans=max(ans,temp);
                temp--;
            }
        }
        return ans;
    }
};
