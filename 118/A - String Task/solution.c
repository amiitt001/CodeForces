#include <stdio.h>
#include <ctype.h>
#define is_vowel(c) (c == 'A' || c == 'O' || c == 'Y' || c == 'E' || c == 'U' || c == 'I' || \
                     c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i')
int main()
{
    char string[101];
    scanf("%s", string);
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (!is_vowel(string[i]))
        {
            printf(".%c", tolower(string[i]));
        }
    }
    return 0;
}