#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;

void solve() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    if(arr[0]==arr[n-1]){
        cout<<"no\n";
        return;
    }
    cout<<"yes\n";
    cout<<arr[n-1]<<" ";
    for(int i=0;i<n-1;i++){
        cout<<arr[i];
        if(i!=n-2)cout<<" ";
    }
    cout<<"\n";
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
