#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
void solve()
{
    int n,ans=0;
    ll mini=INT_MAX;
    cin>>n;
    vi arr;
    bool sorted=true;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
        if(i){
            mini=min(mini,arr[i]-arr[i-1]);
            sorted&=arr[i]>=arr[i-1];
        }
    }
    if(!sorted){
        cout<<0<<endl;
        return;
    }
    cout<<mini/2 +1<<endl;
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
