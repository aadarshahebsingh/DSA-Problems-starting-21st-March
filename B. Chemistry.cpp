#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;

void solve(){
    int n,k;
    cin>>n>>k;
    string str;
    cin>>str;
    int cha[26]={0};
    for(int i=0;i<n;i++){
        cha[str[i]-'a']^=1;
        // cout<<cha[str[i]-'a']<<endl;
    }
    int ans=0;
    for(int i=0;i<26;i++) ans+=cha[i];
    if(k>=ans-1)cout<<"yes\n";
    else cout<<"no\n";
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
