#include <stdio.h>
void print(int n)
{
    if (n == 0)
    {
        return;
    }

    printf("I love Recursion\n");

    print(n -= 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    print(n);
    return 0;
}

// #include <stdio.h>
// void fun(int i, int n)
// {
//     if (i == n + 1) // base case
//     {
//         return;
//     }
//     printf("I love Recursion\n");
//     fun(i + 1, n);
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     fun(1, n);
//     return 0;
// }