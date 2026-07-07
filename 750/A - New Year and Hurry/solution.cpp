#include<iostream>
using namespace std;
int main(){
    int p;
    int k ;
    cin>>p;
    int s = p;
    cin>>k;
    int req_t = 0;
    int rem_t = 240 -k;
    for(int i = 1; i<=p; i++){
        req_t += 5*i;
    }
    while(req_t > rem_t){
        s = s-1;
        req_t = 0;
        for(int  i = s; i>0; i--){
            req_t += 5*i;
            
        }
        
    }
    cout<<s;
}