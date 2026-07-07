#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main()
{
    char string[1000];
    scanf("%s", string);
    if(islower(string[0])){
        string[0] = toupper(string[0]);
    }
    printf("%s", string);
    return 0;
}