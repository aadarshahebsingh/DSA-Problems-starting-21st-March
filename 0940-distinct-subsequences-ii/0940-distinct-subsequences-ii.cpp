class Solution {
public:
     int MOD=1e9+7;
    int distinctSubseqII(string s) {
        int n=s.size();
        vector<long long> end(27, 0);
        long long total=0;

        for(int i=0; i<n; i++){
            char ch=s[i];
            long long new_cnt=(total+1)%MOD;
            total=(total+new_cnt-end[ch-'a']+MOD)%MOD;
            end[ch-'a']=new_cnt;
        }
        return total;
    }
};