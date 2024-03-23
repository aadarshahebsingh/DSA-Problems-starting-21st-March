#include <iostream>
using namespace std;
#include <bits/stdc++.h> 

void solve(){
    int n;cin>>n;
    string str;
    cin>>str;
    int x=0;
    if(str[0]=='.')
        x++;
    for(int i=1;i<n-1;i++){
        if(str[i-1]=='.' && str[i+1]=='.' && str[i]=='.'){
            cout<<2<<endl;
            return;
        }
        if(str[i]=='.')x++;
    }
    if(n>1){
        if(str[n-1]=='.')x++;
    }
    cout<<x<<endl;
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
