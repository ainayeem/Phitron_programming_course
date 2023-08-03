#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int ar[n];
    int cnt[m];
    for (int i = 0; i < m; i++)
    {
        cnt[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cnt[ar[i] - 1]++;
    }
    for (int i = 0; i < m; i++)
    {
        printf("%d\n", cnt[i]);
    }

    return 0;
}