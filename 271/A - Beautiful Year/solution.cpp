#include <stdio.h>
int isDistinct(int y)
{
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        int rem = y % 10;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == rem)
            {
                return 1;
            }
        }
        arr[i] = rem;
        y /= 10;
    }
    return 0;
}
int main() {
    int num;
    scanf("%d", &num);
    if(num>9000) return 1;
    for (int i = num+1; i <= 9012; i++){
        if(isDistinct(i)==0){
            printf("%d
", i);
            break;
        }
    }
    return 0;
}