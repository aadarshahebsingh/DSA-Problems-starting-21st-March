#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
void solve()
{
    int n;
    cin>>n;
    int x=0;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        x^=temp;
    }
    if(x==0)cout<<0<<"\n";
    else{
        if(n%2==0)cout<<-1<<"\n";
        else cout<<x<<"\n";
    }
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
