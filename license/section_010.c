#include <stdio.h>

int main()
{
    int i, j;

    i = 0, j = 0;
    do
    {
        i++;
        j += i;
    } while (i < 100);

    printf("%d %d", i, j);
    
}