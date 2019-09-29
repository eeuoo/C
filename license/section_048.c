#include <stdio.h>

/* 배열11 - 마방진 (Magic Square) */

int main()
{
    int i, j, k, nmg;
    int a[5][5] = {};

    i = 0;
    j = 5 / 2;

    for (k = 1; k <= 25; k++)
    {
        a[i][j] = k;
        nmg = k - k / 5 * 5;

        if (nmg == 0)
        {
            i++;
            continue;
        }

        i--;
        j++;

        if (i < 0)
            i = 4;
        
        if (j > 4)
            j = 0;
    }

    for (int x = 0; x <= 4; x++)
    {
        for (int y = 0; y <= 4; y++)
            printf("%3d", a[x][y]);
        printf("\n");
    }
}