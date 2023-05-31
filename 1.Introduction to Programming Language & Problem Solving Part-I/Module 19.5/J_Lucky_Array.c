#include <stdio.h>
#include <limits.h>
int main()
{
    int n, count = 0;
    int min = INT_MAX;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (ar[i] < min)
        {
            min = ar[i];
        }
    }
    // printf("%d", min);
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == min)
        {
            count++;
        }
    }
    // printf("%d", count);
    if (count % 2 == 0)
    {
        printf("Unlucky\n");
    }
    else
    {
        printf("Lucky\n");
    }

    return 0;
}