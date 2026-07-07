#include <stdio.h>
#include<stdlib.h>
int main()
{
    int x, y, i, j;
    int A[5][5];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &A[i][j]);
            if (A[i][j] == 1)
            {
                x = i + 1;
                y = j + 1;
            }
        }
    }
    int move = abs(x-3) + abs(y-3);
    printf("%d",move);
    return 0;
}