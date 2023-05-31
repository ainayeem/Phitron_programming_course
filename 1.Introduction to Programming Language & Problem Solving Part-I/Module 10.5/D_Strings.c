#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    printf("%d %d\n", strlen(a), strlen(b));
    printf("%s%s\n", a, b);

    int temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s", a, b);

    return 0;
}