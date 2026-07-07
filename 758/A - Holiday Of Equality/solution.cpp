#include <bits/stdc++.h>
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
 
	int n;
	if (!(cin >> n)) return 0;
	vector<long long> a(n);
	long long mx = LLONG_MIN;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		mx = max(mx, a[i]);
	}
	long long ans = 0;
	for (int i = 0; i < n; ++i) ans += (mx - a[i]);
	cout << ans << '
';
	return 0;
}