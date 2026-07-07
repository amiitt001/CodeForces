#include<iostream>
 
using namespace std;
 
int main(){
    int n;
    int st =0;
    cin>>n;
    int a[n];
    for(int i =0; i<n; i++){
        cin>>a[i];
        if (a[i] == 1)
        {
            st = 1;
            break;
        }
        else{
            st = 0;
        }
        
    }
    if (st == 1)
    {
        cout<<"HARD"<<endl;
    }
    else
    {
        cout<<"EASY"<<endl;
    }
    return 0;
    
    
}