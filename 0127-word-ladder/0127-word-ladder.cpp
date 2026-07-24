class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        set<string> st;
        for(auto &x:wordList)st.insert(x);

        if(st.find(endWord)==st.end())return 0;
        queue<pair<string,int>> q;
        q.push({beginWord,1});
        int ans=0;
        while(!q.empty()){
            auto [x,y]=q.front();
            q.pop();

            if(x==endWord){
                return y;
            }

            for(int i=0;i<x.length();i++){
                char og=x[i];
                for(char ch='a';ch<='z';ch++){
                    if(og==ch)continue;
                    x[i]=ch;
                    if(st.find(x) != st.end()){
                        q.push({x, y + 1});
                        st.erase(x);
                    }
                }
                x[i]=og;
            }
        }
        return 0;
    }
};