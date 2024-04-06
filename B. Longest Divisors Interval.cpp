#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;

void solve(){
    long long n,ans=1;
    cin>>n;
    for(long long i=1; ;i++){
        if(n%i!=0){
            ans=i-1;
            break;
        }
        
    }
    cout<<ans<<endl;
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
