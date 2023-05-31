#include <stdio.h>
void fun(int val)
{
    if (val == 0)
    {
        return;
    }

    int x = val % 10;
    fun(val / 10);
    printf("%d ", x);
}
int main()
{
    int test, val;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        scanf("%d", &val);
        fun(val);
        if (val == 0)
        {
            printf("0");
        }

        printf("\n");
    }

    return 0;
}