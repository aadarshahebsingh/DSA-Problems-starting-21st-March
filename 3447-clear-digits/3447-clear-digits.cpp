class Solution {
public:
    string clearDigits(string s) {
        stack<int> st;
        for(int i=0;i<s.length();i++){
            if(s[i]>='0' && s[i]<='9'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string ans="";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};