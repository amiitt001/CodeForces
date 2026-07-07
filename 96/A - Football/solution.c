#include <stdio.h>
#include <string.h>
 
int main()
{
    char ch[100];
    scanf("%s", ch);
    int st = 1;
    char prev = ch[0];
 
    for (int i = 1; i < strlen(ch); i++)
    {
        if (ch[i] == prev)
        {
            st++;
            if (st >= 7)
            {
                printf("YES");
                return 0;
            }
        }
        else
        {
            st = 1; 
            prev = ch[i];
        }
    }
 
    printf("NO"); 
    return 0;
}