#include <stdio.h>
#include <limits.h>
int fun(int ar[], int n, int i)
{
    if (i == n)
    {
        return INT_MIN;
    }
    int max = fun(ar, n, i + 1);
    if (ar[i] > max)
    {
        return ar[i];
    }
    else
    {
        return max;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int max = fun(ar, n, 0);
    printf("%d", max);

    return 0;
}