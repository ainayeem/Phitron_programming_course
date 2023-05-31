#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int key;
    scanf("%d", &key);
    int src = -1;

    for (int i = 0; i < n; i++)
    {
        if (ar[i] == key)
        {
            src = i;
            break;
        }
    }
    printf("%d", src);

    return 0;
}