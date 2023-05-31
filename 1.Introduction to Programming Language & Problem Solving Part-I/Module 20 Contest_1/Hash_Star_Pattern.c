#include <stdio.h>
int main()
{
    int n, k = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // printf("*");

            if (i == n / 2)
            {
                /* code */
                printf("#");
            }
            else
            {
                if (j == n / 2)
                {
                    printf("#");
                }
                else
                {
                    printf("*");
                }
            }
        }
        // k++;
        printf("\n");
    }

    return 0;
}