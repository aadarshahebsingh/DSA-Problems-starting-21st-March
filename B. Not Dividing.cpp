#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;

void solve(){
    int n,p,k=0;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)if(arr[i]==1)arr[i]++;
    for(int i=1;i<n;i++)if(arr[i]%arr[i-1]==0)arr[i]++;
    
    for(auto& x:arr)cout<<x<<" ";
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
