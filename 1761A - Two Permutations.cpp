#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;

 
void solve(){
    int n,a,b;
    cin >> n >> a >> b;
    int k = n - (a+b);
    if(n==a && n==b) cout<<"yes\n";
    else if(k >= 2) cout<<"yes\n";
    else cout<<"no\n";
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
