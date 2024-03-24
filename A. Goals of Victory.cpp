#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
void solve()
{
    int n,ans=0;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int temp;
        cin>>temp;
        ans+=temp;
    }
    cout<<0-ans<<endl;

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
