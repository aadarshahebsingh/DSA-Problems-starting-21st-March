#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
void solve()
{
    long long int n, k;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        cout << "YES";
    }
    else if (n % 2 == 1)
    {
        if ((k % 2 == 1) and (k <= n))
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    cout << endl;
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
