#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000001];
    // scanf("%s", a);
    gets(a);
    // printf("%s", a);
    for (int i = 0; a[i] != '\\'; i++)
    {
        printf("%c", a[i]);
    }

    return 0;
}