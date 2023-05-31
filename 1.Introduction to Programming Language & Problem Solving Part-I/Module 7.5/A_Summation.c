#include <stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&ar[i]);
    }
    long long int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+ar[i];
    }
    if (sum>=0)
    {
        printf("%lld",sum);
    }
    else{
    printf("%lld",sum*-1);
    }
    
    
    

    return 0;
}