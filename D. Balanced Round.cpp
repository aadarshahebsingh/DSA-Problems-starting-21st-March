#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr.begin(),arr.end());

    int cnt=1,ans=1;
    for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1]<=k)cnt++;
        else cnt=1;
        ans=max(cnt,ans);
    }
    cout<<n-ans<<"\n";
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
