#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
void solve()
{
    int n;
    cin>>n;
    vi arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(i && arr.back()>x)arr.push_back(1);
        arr.push_back(x);
    }
    cout<<arr.size()<<"\n";
    for(int x:arr)cout<<x<<" ";
    cout<<endl;

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
