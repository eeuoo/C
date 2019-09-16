#include <stdio.h>

int main()
{
    int i, j, k;
    i = 0;
    j = 1;
    k = 1;
    do
    {
        i++;
        j += i;
        k += j;
    } while (i < 19);
    printf("%d", k);
}