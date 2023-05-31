// https://docs.google.com/document/d/18XxMIXAdptjGq5a_OphEXNpmaXnP4F-CX_mYOf-np58/edit

#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a % b == 0)
    {
        printf("Multiples");
    }
    else if (b % a == 0)
    {
        printf("Multiples");
    }
    else
    {
        printf("No Multiples");
    }

    return 0;
}