#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;

void solve() {
    int n, ope=0,ans=0;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
        if(i){
            //even case
            if(x%2==0 && arr[i-1]%2==0){
                ope++;
            }
            else if(x%2 && arr[i-1]%2)ope++;
        }
    }
    
    cout<<ope<<"\n";
    
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
