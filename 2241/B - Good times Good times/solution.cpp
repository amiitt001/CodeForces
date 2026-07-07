#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long x;
        cin >> x;
 
        int d = 0;
        long long temp = x;
 
        while (temp > 0) {
            temp /= 10;
            d++;
        }
 
        long long p = 1;
        for (int i = 0; i < d; i++)
            p *= 10;
 
        cout << p + 1 << '
';
    }
 
    return 0;
}