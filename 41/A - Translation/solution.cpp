#include<stdio.h>
#include<string.h>
 
int main(){
   char str1[100];
   char str2[100];
   int st =0;
   scanf("%s%s", str1, str2);
   int n = strlen(str1);
   int n2 = strlen(str2);
   if(n == n2){
   for(int i =0; str1[i] != '\0'; i++){
    if (str1[n-1-i] == str2[i])
    {
        st =1;
    }else{
        st = 0;
        break;
    }
    
   }
   if (st==1)
   {
    printf("YES");
   }
   else
   {
    printf("NO");
   }
   }else
   printf("NO");
   
 
    return 0;
}