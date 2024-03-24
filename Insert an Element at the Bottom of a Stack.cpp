class Solution{
public:
    stack<int> insertAtBottom(stack<int> st,int x){
        stack<int> s;
        stack<int> sta;
        sta.push(x);
        while(!st.empty()){
            int temp=st.top();
            s.push(temp);
            st.pop();
        }
        while(!s.empty()){
            int temp=s.top();
            sta.push(temp);
            s.pop();
        }
        return sta;
    }
};
