#include <stdio.h>
int main()
{
    int n = 0;
    int max = 0, maxdex = 0, mindex = 0;

    int min = 100000;

    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (ar[i] >= max)
        {
            max = ar[i];
            maxdex = i;
        }
        if (ar[i] <= min)
        {
            min = ar[i];
            mindex = i;
        }
    }
    ar[maxdex] = min;
    ar[mindex] = max;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}