#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            scanf("%d", &a[i][j]);
        }
    }
    int search;
    scanf("%d", &search);
    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // printf("%d ", a[i][j]);
            if (a[i][j] == search)
            {
                flag = 1;
            }
        }
    }

    if (flag == 0)
    {
        printf("will take number\n");
    }
    else
    {
        printf("will not take number");
    }

    return 0;
}