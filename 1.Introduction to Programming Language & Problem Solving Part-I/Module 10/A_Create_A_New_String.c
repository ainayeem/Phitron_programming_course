// https://docs.google.com/document/d/16nJwleGtTHCab9XBs14X-7GUARQxVnGvbUVR1O9a9o8/edit
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    char b[100];
    scanf("%s %s", a, b);
    int lenA = strlen(a);
    int lenB = strlen(b);
    printf("%d %d\n", lenA, lenB);
    printf("%s %s\n", a, b);
    return 0;
}