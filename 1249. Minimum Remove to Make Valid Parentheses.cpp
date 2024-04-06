class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int leftCnt=0,rightCnt=0;
        stack<char> st;
        for(auto c:s){
            if(c=='('){
                leftCnt++;
            }
            else if(c==')')rightCnt++;

            if(rightCnt>leftCnt){
                rightCnt--;
                continue;
            }
            else st.push(c);
        }
        string ans="";
        while(!st.empty()){
            char curr=st.top();
            st.pop();
            if(leftCnt>rightCnt && curr=='(')leftCnt--;
            else ans+=curr;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
