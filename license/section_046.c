#include <stdio.h>

/* 배열9 - 달팽이 만들기 */

int main()
{
    int k, c, i, j, f, n;
    int a[5][5] = {};

    k = 0;
    c = 1;
    i = 0;
    j = -1;
    f = 5;

    while (1)
    {
        for (n = 1; n <= f; n++)
        {
            k++;
            j += c;
            a[i][j] = k;
        }

        f--;

        if (f <= 0)
            break;
        
        for (n = 1; n <= f; n++)
        {
            k++;
            i += c;
            a[i][j] = k;
        }

        c *= -1;
    }

    for (int x = 0; x <= 4; x++)
    {
        for (int y = 0; y <= 4; y++)
            printf("%3d", a[x][y]);
        printf("\n");
    }
}