#include <iostream>
using namespace std;
 
int main()
{
    long long int n, k;
    cin >> n >> k;
 
    if (k <= 0 || k > n) {
        cout << "Error: k must be between 1 and n." << endl;
        return 1;
    }
 
    long long int count_odds = (n + 1) / 2;
 
    if (k <= count_odds) {
        // k-th odd number
        cout << 2 * k - 1 << endl;
    } else {
        // (k - count_odds)-th even number
        cout << 2 * (k - count_odds) << endl;
    }
 
    return 0;
}