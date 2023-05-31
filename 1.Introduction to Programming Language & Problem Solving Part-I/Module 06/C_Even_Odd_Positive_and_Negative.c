#include <stdio.h>
int main()
{
    int n, m;
    int even = 0, odd = 0, pos = 0, neg = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &m);
        if (m % 2 == 0)
        {
            even++;
        }
        else if (m % 2 != 0)
        {
            odd++;
        }
        if (m > 0)
        {
            pos++;
        }
        else if (m < 0)
        {
            neg++;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);

    return 0;
}