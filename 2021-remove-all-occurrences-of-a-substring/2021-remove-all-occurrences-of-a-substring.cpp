class Solution {
public:
    void solve(string& part,int& n,vector<int>& lps){
        int i=0,j=1;
        while(j<n){
            if(part[i]==part[j]){
                lps[j]=i+1;
                i++;j++;
            }
            else{
                if(i>0)
                    i=lps[i-1];
                else j++;
            }
        }
    }
    void remove(string&s,string& part,vector<int>& lps){
        int m=s.size(),n=part.size(),i=0,j=0;
        while(i<m){
            if(s[i]==part[j]){
                i++;j++;
            }
            if(j==n){
                s=s.substr(0,i-n)+s.substr(i);
                m=s.size();
                i=max(0,i-2*n);
                j=0;
            }
            if(s[i]!=part[j]){
                if(j==0)i++;
                else j=lps[j-1];
            }
        }
    }
    string removeOccurrences(string s, string part) {
        int n=part.size();
        vector<int> lps(n,0);

        solve(part,n,lps);
        remove(s,part,lps);
        return s;
    }
};