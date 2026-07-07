#include <stdio.h>
int main()
{
    int n, problems = 0;
    int Petya, Vasya, Tonya;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &Petya, &Vasya, &Tonya);
        if (Petya + Vasya + Tonya >= 2)
        {
            problems++;
        }
    }
    printf("%d
", problems);
    return 0;
}