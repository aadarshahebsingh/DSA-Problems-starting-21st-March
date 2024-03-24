#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
void solve()
{
    int n,m,present=0;
    cin>>n>>m;
    // vi arr(n);
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        // cout<<temp<<endl;
        if(temp==m){
            present++;
        }
    }
    if(present)cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;

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
