#include <stdio.h>
#include <string.h>
int main()
{
    char a[1001];
    int i, count = 0;

    gets(a);
    // printf("%d", strlen(a));
    for (i = 0; i < strlen(a) / 2; i++)
    {
        if (a[i] == a[strlen(a) - i - 1])
        {
            count++;
        }
    }

    return 0;
}