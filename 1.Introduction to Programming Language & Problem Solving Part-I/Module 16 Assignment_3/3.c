#include <stdio.h>
int count_before_zero(int ar[], int n)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (ar[i] == 0)
        {
            break;
        }
        else
        {
            count += 1;
        }
    }
    return count;
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

    int total = count_before_zero(ar, 5);
    printf("%d", total);

    return 0;
}