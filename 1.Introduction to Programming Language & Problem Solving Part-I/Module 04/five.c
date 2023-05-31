#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    if (num > 1000)
    {
        printf("I will buy Punjabi\n");
        if (num - 1000 >= 500)
        {
            printf("I will buy new shoes\nAlisa will buy new shoes\n");
        }
    }
    else
    {
        printf("Bad luck!");
    }

    return 0;
}