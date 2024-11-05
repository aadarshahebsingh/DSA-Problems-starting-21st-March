class Solution {
public:
    int minChanges(string s) {
        // return 0;
        int one=0,zero=0;
        // for(auto x:s){
        //     if(x=='1')one++;
        //     else zero++;
        // }
        // if(one<=zero)return one;
        // return zero;
        int cnt=0;
        for(int i=0;i<s.length()-1;i+=2){
            if(s[i]!=s[i+1])cnt++;
        }
        return cnt;
    }
};