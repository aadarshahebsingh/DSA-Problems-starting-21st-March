#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b <= d && c <= a + d - b)
    {
        cout << (d - b) + (a + d - b - c) << "\n";
    }
    else
    {
        cout << "-1\n";
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
