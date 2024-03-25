#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
void solve()
{
    ll n;
    cin>>n;
    int maxi=0,ze=0;
    for(ll i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==0){
            ze++;
            maxi=max(maxi,ze);
        }
        else ze=0;
    }
    cout<<maxi;
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
