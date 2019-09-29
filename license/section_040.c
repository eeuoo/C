#include <stdio.h>

/* 배열3 - 'ㄹ'자로 채우기 */

int main()
{
    int k , L, m, n, i, j, p;
    int a[5][5] = {};

    k = 0;
    L = 0;
    m = 4;
    n = 1;

    for (i = 0; i <= 4; i++)
    {
        for (j = L; j != m + n; j += n)
        {
            k++;
            a[i][j] = k;
        }

        p = L;
        L = m;
        m = p;
        n *= -1;
    }

    for (int x = 0; x <= 4; x++)
    {
        for (int y = 0; y <= 4; y++)
            printf("%3d", a[x][y]);
        printf("\n");
    }
}