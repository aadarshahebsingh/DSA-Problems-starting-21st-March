#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
void solve()
{
    int n,m;
    cin>>n>>m;
    if(n%m!=0){
        cout<<"1\n"<<n<<"\n";
    }
    else{
        int first;
        for(int i=1;i<m;i++){
            if(m%i!=1){
                first=i;
                break;
            }
        }
        cout<<"2\n";
        cout<<first<<" "<<n-first<<endl;
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
