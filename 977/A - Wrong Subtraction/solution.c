#include<stdio.h>
int main(){
    long long int num;
    int rem, k;
    scanf("%lld%d",&num, &k);
    for(int i =0 ; i<k; i++){
        if (num%10 == 0){
            num = num/10;
        }else{
            num = num -1;
        }
    }
    printf("%lld", num);
    return 0 ;
 
}