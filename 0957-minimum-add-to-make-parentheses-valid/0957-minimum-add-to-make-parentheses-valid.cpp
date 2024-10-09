class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(st.top()=='(' && s[i]==')'){
                st.pop();
                // cout<<"helll"<<endl;
            }
            else st.push(s[i]);
        }
        return st.size();
    }
};