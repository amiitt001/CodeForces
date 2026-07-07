#include <iostream>
using namespace std;
int main()
{
    int n, h;
    cin >> n >> h;
    int count1 = 0, count2 = 0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > h)
        {
            count1 = count1 + 2;
        }
        else
            count2++;
    }
    cout << count1 + count2;
 
    return 0;
}