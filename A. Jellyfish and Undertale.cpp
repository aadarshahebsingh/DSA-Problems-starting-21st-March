#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;

void solve(){
    int a,b,n;
    cin>>a>>b>>n;
    long long ans=b;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ans+=min(a-1,x);
    }
    cout<<ans<<"\n";
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
