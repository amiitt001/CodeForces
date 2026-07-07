#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s;
    if (!getline(cin, s)) return 0;
    unordered_set<char> st;
    for (char c : s) if (c >= 'a' && c <= 'z') st.insert(c);
    cout << st.size() << '
';
    return 0;
}