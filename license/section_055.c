#include <stdio.h>

/* 사과 나눠 갖기 */

int main()
{
    int i, j, k, nmg;
    i = 0;
    A:
    i++;
    j = i;

    for(k = 1; k <= 5; k++)
    {
        nmg = j - j / 4 * 4;

        if (nmg == 1)
        {
            j--;
            j = j * 3 / 4;
        }
        else 
            goto A;
    }

    printf("%d", i);
}