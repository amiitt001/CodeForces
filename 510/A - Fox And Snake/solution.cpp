#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    if (!(cin >> n >> m)) return 0;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 1) {
            for (int j = 0; j < m; ++j) cout << '#';
        } else {
            if (i % 4 == 2) {
                for (int j = 0; j < m - 1; ++j) cout << '.';
                cout << '#';
            } else { // i % 4 == 0
                cout << '#';
                for (int j = 0; j < m - 1; ++j) cout << '.';
            }
        }
        cout << '
';
    }
    return 0;
}