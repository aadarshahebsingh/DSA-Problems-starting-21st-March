#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
void solve()
{
    int n,mini=INT_MAX;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(temp==0){
            cout<<0<<endl;
            return;
        }
        mini=min(mini,abs(temp));
    }
    cout<<mini<<endl;

}

int main()
{
    // These are used to improve the input output cases
    ios::sync_with_stdio(false);
	  cin.tie(nullptr);
    solve();
    return 0;
}
