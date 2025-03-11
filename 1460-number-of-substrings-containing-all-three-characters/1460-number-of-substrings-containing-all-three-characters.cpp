class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> cnt(3,0);
        int left=0,res=0;
        for(int i=0;i<s.length();i++){
            cnt[s[i]-'a']++;

            while(cnt[0]>0 && cnt[1]>0 && cnt[2]>0){
                res+=s.length()-i;
                cnt[s[left]-'a']--;
                left++;
            }
        }
        return res;
    }
};