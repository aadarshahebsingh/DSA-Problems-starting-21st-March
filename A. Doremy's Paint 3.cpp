#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
void solve()
{
    int n;
    cin >> n;
    map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        mp[x]++;
    }
    if(mp.size()>=3)cout<<"No"<<endl;
    else{
        if(abs(mp.begin()->second-mp.rbegin()->second)<=1)
        {
            cout<<"yes"<<endl;
        }
        else cout<<"no"<<endl;
    }
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
