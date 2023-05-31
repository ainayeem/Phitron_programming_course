#include <stdio.h>
void fun(int ar[], int n, int i, long long int sum)
{
    if (i == n)
    {
        printf("%lld", sum);
        return;
    }

    sum = sum + ar[i];
    fun(ar, n, i + 1, sum);
}
int main()
{
    int n, i = 0;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    fun(ar, n, i, 0);

    return 0;
}