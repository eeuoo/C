#include <stdio.h>

/* 배열10 - 대각선으로 채우기 */

int main()
{
    int i, j, k;
    int a[5][5] = {};
    int L = 0;

    for (i = 0; i <= 8; i++)
    {
        for (j = 0; j <= 4; j++)
        {
            k = i - j;

            if (k < 0) continue;

            if (k > 4) continue;

            L++;
            a[j][k] = L;
        }
    }

    for (int x = 0; x <= 4; x++)
    {
        for (int y = 0; y <= 4; y++)
            printf("%3d", a[x][y]);
        printf("\n");
    }
}