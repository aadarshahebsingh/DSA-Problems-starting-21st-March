#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;

inline void test_case(){
	
	int N;
	cin >> N;

	int A[N];
	int ans = -1000000007;

	for(int i = 0; i < N; ++i){
		cin >> A[i];
	}

	for(int i = 0; i < N; ++i){
		ans = max(ans, A[(i - 1 + N) % N] - A[i]);
	}

	for(int i = 1; i < N; ++i){
		ans = max(ans, A[i] - A[0]);
	}

	for(int i = 0; i < N - 1; ++i){
		ans = max(ans, A[N - 1] - A[i]);
	}

	cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
    return 0;
}
