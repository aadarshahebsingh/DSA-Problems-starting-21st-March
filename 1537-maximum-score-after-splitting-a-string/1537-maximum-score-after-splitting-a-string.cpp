class Solution {
public:
    int maxScore(string s) {
        int size=s.length();
        int ones=0;
        int temp=s[0]=='0'?1:0;
        int ans=temp;

        for(int  i=1;i<size-1;i++){
            if(s[i]=='0')temp++;
            else {
                ones++;
                temp--;
            }
            if(temp>ans)ans=temp;
        }
        ones+=(s[size-1]=='1'?1:0);
        return ones+ans;
    }
};