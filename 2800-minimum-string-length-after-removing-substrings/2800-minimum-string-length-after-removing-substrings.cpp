class Solution {
public:
    int ans=0;
    void helper(int i,string &str){
        int len=str.length();
        if(i>=len-1){
            ans=str.length();
            return;
        }
        if((str[i]=='A' && str[i+1]=='B')|| (str[i]=='C'&&str[i+1]=='D')){
            str.erase(i,2);

            helper(max(0,i-1),str);
            
        }
        // helper(i+1,str,len);
        else{
            helper(i+1,str);
        }

    }
    int minLength(string s) {
        // i have to remove substrings
        string str=s;
        helper(0,str);
        return ans;
    }
};