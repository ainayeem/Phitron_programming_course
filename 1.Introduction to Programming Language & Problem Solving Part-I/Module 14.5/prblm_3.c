#include <stdio.h>
int char_to_ascii(char x)
{
    int val = x;
    return val;
}
int main()
{
    char c;
    scanf("%c", &c);
    char_to_ascii(c);
    printf("%d", c);
    return 0;
}