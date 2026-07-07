#include<iostream>
using namespace std;
 
 
int main(){
    int n;
    int count  = 0;
    string str;
    cin>>n;
    for(int i= 0; i<n; i++){
        cin>>str;
        if (str == "Cube"){
            count =count +6;
        }else if(str == "Tetrahedron"){
            count = count + 4;
        }
        else if(str =="Octahedron"){
            count = count +8;
        }
        else if(str == "Dodecahedron"){
            count = count +12;
        }
        else if (str == "Icosahedron"){
            count = count +20;
        }
    } 
    cout<<count;
    return 0;
}