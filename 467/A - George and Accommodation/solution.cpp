#include<stdio.h>
int main(){
    int n;
    int count = 0;
    scanf("%d", &n);
    int p[n], q[n];
    for(int i = 0 ;i<n; i++){
        scanf("%d", &p[i]);
        scanf("%d", &q[i]);
        if ((q[i] - p[i]) >= 2)
        {
            count++;
        }
        
    }
    printf("%d", count);
    return 0;
}