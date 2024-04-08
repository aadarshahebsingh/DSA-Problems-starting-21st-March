#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;

void solve(){
    int n,k;
    cin>>n;
    string s;
    cin>>s;
    int ans=1,cnt=1;
    for(int i=1;i<n;i++)
    {
        if(s[i]!=s[i-1])cnt=1;
        else cnt++;
        ans=max(cnt,ans);
    }
    cout<<ans+1<<"\n";
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
