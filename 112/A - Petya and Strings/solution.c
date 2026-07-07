#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char lower[100], upper[100];
    scanf("%s%s", &lower, &upper);
    for(int i =0; lower[i] != '\0';i++){
        lower[i] = tolower(lower[i]);
    }
    for(int i =0; upper[i] != 0;i++){
        upper[i]= tolower(upper[i]);
    }
    int result = strcmp(lower, upper);
    if (result > 0)
    {
        printf("1
");
    }
    if (result < 0)
    {
        printf("-1
");
    }
    if (result == 0)
    {
        printf("0
");
    }
    return 0;
}