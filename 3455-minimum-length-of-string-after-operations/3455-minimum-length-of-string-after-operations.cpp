class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        if(n<3) return n;
        vector<int> res(26,0);
        for(char ch: s){
            res[ch-'a']++;
        }
        int count = 0;
        for(int i = 0; i < 26; i++){
            if(res[i]<3) continue;
            if(res[i] % 2 == 0){
                count+=res[i]-2;
            } else{
                count+=res[i]-1;
            }
        }
        return n-count;
    }
};