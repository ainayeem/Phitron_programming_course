#include <stdio.h>
void fun(int ar[], int n, int i)
{
    if (i == n)
    {
        return;
    }

    printf("%d\n", ar[i]);
    fun(ar, n, i + 1);
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
    fun(ar, n, i);

    return 0;
}