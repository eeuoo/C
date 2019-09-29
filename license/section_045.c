#include <stdio.h>

/* 배열8 - 90도 회전하기 */

int main()
{
    int i, j, k;
    int a[5][5] = {}, b[5][5] = {};

    k = 0;

    for (i = 4; i >= 0; i--)
    {
        for (j = i; j <= 4; j++)
        {
            k++;
            a[i][j] = k;
        }
    }

    for (i = 0; i <= 4; i++)
    {
        for (j = 0; j <= 4; j++)
            b[j][4 - i] = a[i][j];
    }

    for (int x = 0; x <= 4; x++)
    {
        for (int y = 0; y <= 4; y++)
            printf("%3d", a[x][y]);
        printf("\n");
    }

    printf("\n");

    for (int x = 0; x <= 4; x++)
    {
        for (int y = 0; y <= 4; y++)
            printf("%3d", b[x][y]);
        printf("\n");
    }
}