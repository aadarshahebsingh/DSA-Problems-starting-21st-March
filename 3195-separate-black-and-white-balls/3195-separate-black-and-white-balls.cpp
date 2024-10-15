class Solution {
public:
    long long minimumSteps(string s) {
        long long ans=0;
        int black=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                ans+=(long long)black;
            }
            else black++;
        }
        return ans;
    }
};