#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (i % 5 == 0)
        {
            printf("%d Yes\n", i);
        }
        else
        {
            printf("%d No\n", i);
        }
    }
}