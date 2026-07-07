// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
 
int main() {
   
    int t;
    cin>>t;
    int x, y,temp;
    
    while(t--){
        cin>>x>>y;
        bool found = false;
        int temp = x;
        int z =1;
          if(y>x){
            cout<<"NO"<<endl;
            continue;
        }
       for (int z = 1; z <= x; z++) {
            if (x % z == 0 && x / z == y) {
                found = true;
                break;
            }
        }
        if(found){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}