class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> st;
        for(auto& c:s){
            st.push(c);
        }
        s.clear();
        while(!st.empty()){
            s.push_back(st.top());
            st.pop();
        }
    }
};
