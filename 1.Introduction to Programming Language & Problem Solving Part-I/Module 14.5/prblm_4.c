#include <stdio.h>
char small_to_capital(char x)
{
    if (x >= 'a' && x <= 'z')
    {
        char val = x - 32;
        // printf("%c", val);
        return val;
    }
}
int main()
{
    char c;
    scanf("%c", &c);
    c = small_to_capital(c);
    printf("%c", c);
    return 0;
}