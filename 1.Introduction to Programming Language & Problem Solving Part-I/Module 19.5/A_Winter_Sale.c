#include <stdio.h>
int main()
{
    float x, p;
    scanf("%f %f", &x, &p);
    float price = (p * 100) / (100 - x);
    printf("%0.2f", price);
    return 0;
}