#include <stdio.h>
#include <ctype.h>
#include<string.h>
int main()
{
    char ch[101];
    int count1 = 0, count2 = 0;
    char result[101];
    scanf("%s", ch);
    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (isupper(ch[i]))
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    for (int i = 0; ch[i] != '\0'; i++)
    {
       
        if (count1 > count2)
        {
            result[i] = toupper(ch[i]);
        }
        else
        {
            result[i] = tolower(ch[i]);
        }
    }
    result[strlen(ch)] = '\0';
    printf("%s", result);
    return 0;
}