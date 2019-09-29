#include <stdio.h>

/* 배열7 - 이등변 삼각형 만들기 */

int main()
{   
    int col, row, k, j, L, e, i;
    printf("column 수를 정해주세요. : ");
    scanf("%d", &col);

    row = col * 2 - 1;

    int a[row][col];

    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            a[i][j] = 0;

    k = 0;

    for (j = 0; j <= col - 1; j++)
    {
        L = col - (j + 1);
        e = (j - 1) + col;

        for (i = L; i <= e; i++)
        {
            k++;
            a[i][j] = k;
        }
    }
    
    for (int y = 0; y < row; y++)
    {
        for (int z = 0; z < col; z++)
            printf("%3d", a[y][z]);
        printf("\n");
    }
}