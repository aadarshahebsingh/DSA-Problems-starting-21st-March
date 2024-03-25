#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;


void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int l = 0, r = n - 1, ans = n;
	while (s[l] != s[r] && ans > 0) {l++; r--; ans -= 2;}
	cout << ans << '\n';
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
