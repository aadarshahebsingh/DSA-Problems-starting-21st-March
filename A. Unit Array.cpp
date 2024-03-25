#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
void solve()
{
    int n;
    cin>>n;
    int one=0,minus=0;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(temp==1)one++;
        else minus++;
    }
    if(one>=minus){
        if(minus%2==0)cout<<0<<"\n";
        else cout<<1<<"\n";
    }
    else{
        int operation=0;
        while(one<minus){
            minus--;
            one++;
            operation++;
        }
        if(minus%2==0)cout<<operation<<"\n";
        else cout<<operation+1<<"\n";
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
