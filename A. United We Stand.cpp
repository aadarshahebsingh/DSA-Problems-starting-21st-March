#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
void solve()
{
    int n;
    cin>>n;
    vi arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        // if(i && arr.back()>x)arr.push_back(1);
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    if(arr.back()==arr[0]){
        cout<<"-1\n";
        return;
    }
    else{
        int it=0;
        while(arr[it]==arr[0])it++;
        cout<<it<<" "<<n-it<<"\n";
        for(int j=0;j<it;j++)cout<<arr[j]<<" ";
        cout<<"\n";
        for(int j=it;j<n;j++)cout<<arr[j]<<" ";
        cout<<"\n";
    }
    

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
