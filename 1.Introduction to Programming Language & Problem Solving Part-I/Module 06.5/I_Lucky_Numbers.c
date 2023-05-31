#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int mod = n % 10;
    int div = n / 10;

    if (mod % div == 0 || div % mod == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}