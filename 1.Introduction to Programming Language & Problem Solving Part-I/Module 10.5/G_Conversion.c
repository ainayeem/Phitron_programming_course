#include <stdio.h>
#include <string.h>
int main()
{
    char a[100001];
    scanf("%s", a);
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == ',')
        {
            // a[i] = ' ';
            printf(" ");
        }
        else if (a[i] >= 'a' && a[i] <= 'z')
        {
            // a[i] = a[i] - 32;
            printf("%c", a[i] - 32);
        }
        else
        {
            // a[i] = a[i] + 32;
            printf("%c", a[i] + 32);
        }
    }

    // printf("%s", a);
    return 0;
}