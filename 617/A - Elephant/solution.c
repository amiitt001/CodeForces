#include <stdio.h>
int main()
{
    int n;
    int a[5] = {5, 4, 3, 2, 1};
    scanf("%d", &n);
 
    int count = n / a[0];
    if(n%5!=0) count++;
 
    printf("%d", count);
    return 0;
}