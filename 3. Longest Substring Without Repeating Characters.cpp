class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,maxi=0;
        unordered_set<char> c;
        for(int i=0;i<s.length();i++){
            while(c.find(s[i])!=c.end()){
                c.erase(s[left]);
                left++;
            }
            c.insert(s[i]);
            maxi=max(maxi,i-left+1);
        }
        return maxi;
    }
};
