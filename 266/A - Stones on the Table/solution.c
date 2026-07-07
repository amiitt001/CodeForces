#include<stdio.h>
int main(){
int n,count = 0;
scanf("%d", &n);
char color[n+1];
scanf("%s", color);
for(int i= 0; i<n-1; i++){
if(color[i] == color[i+1]){
    count++;
}
}
printf("%d", count);
return 0;
}