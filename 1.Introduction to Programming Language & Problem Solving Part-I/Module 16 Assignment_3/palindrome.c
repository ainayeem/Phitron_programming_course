#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, i;
    char a[1001], b[1001], c[1001];
    scanf("%s", a);
    strcpy(c, a);

    for (i = 0; i < strlen(a) / 2; i++)
    {
        int temp = a[i];
        a[i] = a[strlen(a) - i - 1];
        a[strlen(a) - i - 1] = temp;
    }

    for (i = 0; i < strlen(a); i++)
    {
        b[i] = a[i];
    }
    b[i] = '\0';

    if (strcmp(c, b) == 0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not");
    }

    return 0;
}