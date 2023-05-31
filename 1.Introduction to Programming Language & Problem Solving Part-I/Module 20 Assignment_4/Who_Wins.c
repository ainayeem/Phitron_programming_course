#include <stdio.h>
int main()
{
    int n, tiger, pathan, tp = 0, pp = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &tiger, &pathan);
        if (tiger > pathan)
        {
            tp++;
        }
        else if (tiger < pathan)
        {
            pp++;
        }
    }
    // printf("%d %d", tiger, pathan);
    if (tp > pp)
    {
        printf("Tiger\n");
    }
    else if (tp < pp)
    {
        printf("Pathan\n");
    }
    else
    {
        printf("Draw\n");
    }

    return 0;
}