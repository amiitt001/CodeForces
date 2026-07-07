#include <stdio.h>
int main()
{
    int k, w;
    int totalprice = 0;
    long long int n;
    scanf("%d%lld%d", &k, &n, &w);
    for (int i = 0; i <= w; i++)
    {
        totalprice += k * i;
    }
    if (totalprice >= n)
    {
        printf("%d", totalprice - n);
    }else{
        printf("%d", 0);
    }
    return 0;
}