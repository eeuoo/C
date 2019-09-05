#include <stdio.h>

int main()
{
    // int a = 10, even = 0, odd = 0;
    // for (int i = 1; i <= a; ++i) {
    //     if (i % 2 == 0)
    //         even += 1;
    //     else
    //         odd += 1;
    // }

    // printf("%d, %d\n", even, odd);

    int a = 15, b = 0;

    if (a >10)
        b = a - 10;

    b = b + (10 - b);

    printf("%d\n",b);
}