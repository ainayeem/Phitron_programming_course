#include <stdio.h>
int main()
{
    int n;
    int total, num1, num2, num3, num4;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d", &total, &num1, &num2, &num3);
        num4 = total - (num1 + num2 + num3);
        printf("%d\n", num4);
    }

    return 0;
}