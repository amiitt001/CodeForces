#include<stdio.h>
 
int main(){
    long long int n;
    scanf("%lld", &n);
    long long int result = (n%2 == 0)? (n /2) : (-((n+1)/2));
    printf("%lld", result);
    return 0;
}