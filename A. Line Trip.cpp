#include <iostream>
using namespace std;
#include <bits/stdc++.h> 
void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> arr(n);
    for(auto &p:arr)cin>>p;
    int maxi=arr[0]-0;
    
    for(int i=1;i<n;i++){
        maxi=max((arr[i]-arr[i-1]),maxi);
    }
    maxi=max(2*(x-arr[n-1]),maxi);
    cout<<maxi<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
