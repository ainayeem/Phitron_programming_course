#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int main_diag = 0, sec_diag = 0;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                main_diag = main_diag + a[i][j];
            }
        }
    }
    // printf("%d", main_diag);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                sec_diag = sec_diag + a[i][j];
            }
        }
    }
    // printf("%d", sec_diag);
    int diff = abs(main_diag - sec_diag);

    printf("%d", diff);

    return 0;
}