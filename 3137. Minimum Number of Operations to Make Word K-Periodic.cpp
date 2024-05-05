class Solution {
public:
    int minimumOperationsToMakeKPeriodic(string s, int k) {
        int n=s.size();
        int maxi=0,cnt=0;
        map<string,int> m;
        for(int i=0;i<n;i+=k){
            string t=s.substr(i,k);
            m[t]++;
            maxi=max(maxi,m[t]);
            cnt++;
        }
        return cnt-maxi;
    }
};
