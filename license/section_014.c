#include <stdio.h>

int main()
{
    int i = 1, k = 1, j = 1;
    do
    {
        i++;
        j *= i;
        k += j;
    } while (i < 10);
    printf("%d", k);
    
}