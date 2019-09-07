#include <stdio.h>

int main()
{
    int a = 20;
    int *b;
    b = &a;
    *b = *b + 10;
    printf("%d %p %d\n", a, b, *b);
}