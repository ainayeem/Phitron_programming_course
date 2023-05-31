#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    int capital = 0, small = 0, space = 0;
    gets(s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            capital++;
        }
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            small++;
        }
        if (s[i] == ' ')
        {
            space++;
        }
    }
    printf("Capital - %d\n", capital);
    printf("Small - %d\n", small);
    printf("Spaces - %d\n", space);

    return 0;
}