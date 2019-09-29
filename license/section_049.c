#include <stdio.h>

/* 배열12 - 행렬 변환 */

int main()
{
    int row, col, i, j, L, m;
    printf("row와 column을 정해주세요. : ");
    scanf("%d %d", &row, &col);

    int a[row][col];
    int b[col][row];

    int k = 0;

    for (i = 0; i <= row - 1; i++)
    {
        for (j = 0; j <= col - 1; j++)
        {
            k++;
            a[i][j] = k;
        }
    }

    L = 0;
    m = -1;

    for (i = 0; i <= row - 1; i++)
    {
        for (j = 0; j <= col - 1; j++)
        {
            m += 1;
            b[L][m] = a[i][j];

            if (m >= row - 1)
            {
                L++;
                m = -1;
            }
        }
    }

    for (int x = 0; x < row; x++)
    {
        for (int y = 0; y < col; y++)
            printf("%3d", a[x][y]);
        printf("\n");
    }

    printf("\n");

    for (int x = 0; x < col; x++)
    {
        for (int y = 0; y < row; y++)
            printf("%3d", b[x][y]);
        printf("\n");
    }
}