#include <stdio.h>

int main()
{
    // int a = 20;
    // int *b;
    // b = &a;
    // *b = *b + 10;
    // printf("%d %p %d\n", a, b, *b);

    // int a[5];
    // int i;
    // for(i = 0; i < 5; i++)
    //     a[i] = i + 10;

    // for(i = 0; i < 5; i++)
    //     printf("%d", a[i]);

    int a[5];
    int i;
    int *p;
    for(i = 0; i < 5; i++)
        a[i] = i + 10;
    p = a;
    for(i = 0; i < 5; i++)
        printf("%d", *(p+i));
}