#include <stdio.h>
void fun(int *p)
{
    // printf("p er value- %p\n", p);
}
int main()
{
    int x = 100;
    printf("x er address- %p\n", &x);
    fun(&x);

    return 0;
}

// array & pointer

// ar[1] == *(ar + 1)
// *(ar+1)== ar[1]
// *(1+ar)== ar[1] || 1[ar]