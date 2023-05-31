// #include <stdio.h>
// int fun(char a[], int i)
// {
//     if (a[i] == '\0')
//     {
//         return 0;
//     }
//     int l = fun(a, i + 1);
//     return l + 1;
// }
// int main()
// {
//     char a[6] = "hello";
//     int length = fun(a, 0);
//     printf("%d", length);
//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fun(char *arr, int i)
{

    printf("%c", *arr);
    if (arr[i] == '\0')
        return 0;
    int l = fun(arr, i + 1);
    return l + 1;
}

int main()
{

    char arr[1001];
    scanf("%s", arr);

    int length = fun(arr, 0);
    printf("%d", length);

    return 0;
}