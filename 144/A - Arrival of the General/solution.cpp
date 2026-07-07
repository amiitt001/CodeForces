#include<iostream>
using namespace std;
int MaxMin(int n, int arr[]){
    int count = 0;
    int min = arr[0];
    int max= arr[0];
    int minIndex =0 ; int maxIndex= 0;
    for (int i = 1; i < n; i++)
    {
        if(arr[i] > max){
            max = arr[i];
            maxIndex= i;
        }
        if(arr[i] <= min){
            min = arr[i];
            minIndex = i;
        }
    }
    if(minIndex > maxIndex){
        count += maxIndex;
        count += (n-1-minIndex);
    }
     
    if(minIndex < maxIndex){
        count += maxIndex;
        count += (n-2- minIndex);
    }
    return count;
 
}
 
int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int swaps = MaxMin(n,arr);
    cout<<swaps<<endl;
return 0;
}