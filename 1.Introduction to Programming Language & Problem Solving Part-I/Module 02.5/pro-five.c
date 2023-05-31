#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    if (num >= 10000)
    {
        printf("Gucci Bag");
        if (num > 20000)
        {
            printf("\nGucci Belt");
        }
    }
    else if (num >= 5000)
    {
        printf("Levis Bag");
    }
    else
    {
        printf("Something");
    }
    return 0;
}