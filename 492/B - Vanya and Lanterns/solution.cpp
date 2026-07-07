#include<iostream>
#include<algorithm>
#include<iomanip>
 
using namespace std;
 
int main() {
 
    int n, l;
    cin >> n >> l;
 
    int pos[n];
 
    for(int i = 0; i < n; i++) {
        cin >> pos[i];
    }
 
    sort(pos, pos + n);
 
    double dFs = pos[0];
    double dFe = l - pos[n - 1];
 
    double max_diff = 0;
 
    for(int i = 1; i < n; i++) {
        max_diff = max(max_diff, (pos[i] - pos[i - 1]) / 2.0);
    }
 
    double ans = max(dFs, max(dFe, max_diff));
 
    cout << fixed << setprecision(10) << ans;
 
    return 0;
}