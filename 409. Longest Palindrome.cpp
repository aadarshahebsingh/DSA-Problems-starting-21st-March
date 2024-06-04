class Solution {
public:
    int longestPalindrome(string s) {
        unordered_set<char> c;
        int ans=0;
        for(char x:s){
            if(c.find(x)!=c.end()){
                c.erase(x);
                ans+=2;
            }
            else c.insert(x);
        }
        if(!c.empty())ans+=1;
        return ans;
    }
};
