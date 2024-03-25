#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
void solve()
{
    int n,two=0;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
        if(x==2)two++;
    }
    if(two%2){
        cout<<-1<<"\n";
        return;
    }
    else if(two==0){
        cout<<"1\n";
        return;
    }
    two=two/2;
    int i;
    for(i=0;two;i++){
        if(arr[i]==2)two--;
    }
    cout<<i<<"\n";
    
    

}

int main()
{
    // These are used to improve the input output cases
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // solve();
    return 0;
}
