#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(c%2==0){
        if(a>b)cout<<"First\n";
        else cout<<"Second\n";
    }
    else{
        if(b>a)cout<<"Second\n";
        else cout<<"First\n";
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
