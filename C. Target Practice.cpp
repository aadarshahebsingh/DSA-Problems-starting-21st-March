#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
void solve()
{
    int ans=0;
    char arr[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            char temp;
            cin>>temp;
            if(temp=='X'){
                if(i==9 or i==0 or j==0 or j==9){
                    ans+=1;
                }
                else if(i==1 or i==8 or j==8 or j==1){
                    ans+=2;
                }
                else if(i==2 or i==7 or j==2 or j==7)ans+=3;
                else if(i==3 or i==6 or j==3 or j==6)ans+=4;
                else ans+=5;
            }
        }
    }
    cout<<ans<<endl;

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
