#include <stdio.h>
int main()
{
    int n;
    int even = 0;
    int odd = 0;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        // printf("%d ", ar[i]);
        if (ar[i] % 2 == 0)
        {
            even = even + ar[i];
        }
        else
        {
            odd = odd + ar[i];
        }
    }
    printf("%d ", even);
    printf("%d ", odd);

    return 0;
}