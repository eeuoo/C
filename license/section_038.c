#include <stdio.h>

/* 배열 1 - 기본 5행 5열 */

// 행 고정 열 변화
int main()
{
    int i, j, k;
    int a[5][5];

    k = 0;

    for (i = 0; i <= 4; i++)
    {
        for (j = 0; j <= 4; j++)
        {
            k++;
            a[i][j] = k;
        }
    }

    for (int x = 0; x <= 4; x++)
    {
        for (int y = 0; y <= 4; y++)
            printf("%3d", a[x][y]);
        printf("\n");
    }
}