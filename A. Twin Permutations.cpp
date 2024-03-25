#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
void solve()
{
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        cout<<n+1-x<<' ';
    }
    cout<<'\n';
}

int main()
{
    // These are used to improve the input output cases
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // solve();
    return 0;
}
