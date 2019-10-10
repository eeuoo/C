#include <stdio.h>

/* 구구단 */

int main()
{
    int b, c, i, a[9];

    printf("***구구단***\n");

    b = 0;

    do
    {
        b++;
        c = 0;

        do
        {
            c++;
            a[c - 1] = b*c;
        } while (c < 9);

        for (i = 1; i <= 9; i++)
            printf("%d X %d = %d\n", b, i, a[i - 1]);
        
    } while (b < 9);
    
}