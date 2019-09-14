#include <stdio.h>

int main()
{
    int i, j;

    // i = 0, j = 0;
    // do
    // {
    //     i++;
    //     j += i;
    // } while (i < 100);

    i = -1, j = 0;
    do
    {
        i += 2;
        j += i;
    } while (i < 99);

    printf("%d %d", i, j);
    
}