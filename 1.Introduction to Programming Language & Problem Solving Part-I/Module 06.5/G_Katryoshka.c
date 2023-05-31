#include <stdio.h>
int main()
{
    long long int e, m, b;
    long long int count = 0;
    scanf("%lld %lld %lld", &e, &m, &b);

    if (e <= m && e <= b)
    {
        count = e;
    }
    else if (m <= e && m <= b)
    {
        count = m;
    }
    else
    {
        count = b;
    }
    // printf("%d", count);

    e = e - count;
    m = m - count;
    b = b - count;

    long long int e1 = e / 2;

    // printf("%d %d %d", e, m, b);
    if (e1 <= b) // 33
    {
        count = count + e1;
    }
    else
    {
        count = count + b;
    }
    printf("%lld", count);

    return 0;
}