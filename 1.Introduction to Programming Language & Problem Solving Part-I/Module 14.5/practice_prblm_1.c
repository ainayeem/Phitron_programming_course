// https://docs.google.com/document/d/1MbaqPOAm9nUAMxrwR4vxARDMwtkS_SnHVarKeMDdsV8/edit#

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s = n - 1;
    int k = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < k; j++)
        {
            printf("*");
        }
        s--;
        k++;
        printf("\n");
    }

    return 0;
}