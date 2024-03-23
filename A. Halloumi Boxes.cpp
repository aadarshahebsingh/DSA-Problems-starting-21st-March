#include <iostream>
using namespace std;
#include <bits/stdc++.h> 
void solve(){
    int x,y;
    cin>>x>>y;
    vector<int> arr(x);
    for(auto &n:arr) cin>>n;
    if(is_sorted(arr.begin(),arr.end()) || y>1)cout<<"YES"<<endl;

    else cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
