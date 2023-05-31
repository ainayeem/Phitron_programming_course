#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long int n, k;
    long long int sum = 0;

    scanf("%lld %lld", &n, &k);
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                long long int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    for (int i = 0; i < k; i++)
    {
        if (a[i] > 0)
        {
            sum = sum + a[i];
        }
    }
    printf("%lld", sum);

    return 0;
}