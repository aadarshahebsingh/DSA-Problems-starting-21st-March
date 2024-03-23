#include <iostream>
using namespace std;
#include <bits/stdc++.h> 
void solve(){
    int n;cin>>n;
    if(n%3==0)cout<<"Second"<<endl;
    else cout<<"First"<<endl;
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
