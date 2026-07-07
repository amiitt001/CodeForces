#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        string s; cin >> s;
        vector<string> parts;
        int n = s.size();
        for (int i = 0; i < n; ++i) {
            if (s[i] == '0') continue;
            string p;
            p.push_back(s[i]);
            p.append(n - i - 1, '0');
            parts.push_back(p);
        }
        cout << parts.size() << '
';
        for (size_t i = 0; i < parts.size(); ++i) {
            if (i) cout << ' ';
            cout << parts[i];
        }
        cout << '
';
    }
 
    return 0;
}