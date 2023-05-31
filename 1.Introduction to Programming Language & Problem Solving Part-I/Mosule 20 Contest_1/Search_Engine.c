#include <stdio.h>
int main()
{
    int test;

    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int size, search, position = 0, flag = 0;
        scanf("%d", &size);
        int ar[size];
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &ar[i]);
        }
        scanf("%d", &search);

        for (int i = 0; i < size; i++)
        {
            if (ar[i] == search)
            {

                position = i + 1;
                flag = 1;

                break;
            }
        }
        if (flag == 1)
        {
            printf("Case %d: %d\n", i, position);
        }
        else
        {
            printf("Case %d: Not Found\n", i);
        }
    }

    return 0;
}