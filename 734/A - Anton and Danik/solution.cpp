#include <stdio.h>
int main()
{
    long long int n;
    int countA = 0;
    int countD = 0;
    scanf("%lld", &n);
    char ch[n + 1];
    scanf("%s", ch);
    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] == 'A')
        {
            countA++;
        }
        else
        {
            countD++;
        }
    }
    if (countA > countD)
    {
        printf("Anton");
    }
    if (countA < countD)
    {
        printf("Danik");
    }
    if (countA == countD)
    {
        printf("Friendship");
    }
 
    return 0;
}