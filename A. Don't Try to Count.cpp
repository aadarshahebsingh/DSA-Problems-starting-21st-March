#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
void solve()
{
    string x,s;
    int n,m;
    cin>>n>>m;
    cin >> x>>s;
    int ans=0;
    while(x.find(s)==string::npos){
        x+=x;
        ans++;

        if(x.size() > 80){
            cout<<"-1"<<endl;
            return;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
