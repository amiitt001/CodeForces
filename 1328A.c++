#include <iostream>
using namespace std;
int main()
{
    int t;
    int count = 0;
    cin >> t;
    int A[t][2];
    for (int i = 0; i < t; i++){
        for(int j =0 ; j<2; j++){

            cin >> A[i][j];
        }
    }
    
    for(int i= 0; i<2; i++){
        for(int j= 0; j<t; j++){
            if(A[i][1] % A[i][2] != 0)
        }
    }
    return 0;
}
