#include <stdio.h>

int main()
{
    // int i, j, k;
    // i = 0;
    // j = 1;
    // k = 1;
    // do
    // {
    //     i++;
    //     j += i;
    //     k += j;
    // } while (i < 19);
    // printf("%d", k);

    int i = 0, j = 0, k = 0;
    do
    {
        i++;
        j += i;
        k += j;
    } while (i < 20);
    printf("%d", k);
}