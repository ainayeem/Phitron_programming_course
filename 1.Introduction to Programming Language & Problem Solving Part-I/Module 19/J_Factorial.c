#include <stdio.h>
long long int fun(long long int n)
{
    if (n == 0)
    {
        return 1;
    }

    long long int ans = fun(n - 1);
    ans = ans * n;
    return ans;
}
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int factorial = fun(n);
    printf("%lld", factorial);
    return 0;
}