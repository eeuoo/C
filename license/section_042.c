#include <stdio.h>

/* 배열5 - 모래시계 만들기 */

int main()
{
    int x, m, L, i, j, k;
    printf("배열 크기를 입력해주세요 : ");
    scanf("%d", &x);
    
    int a[x][x];
    
    for (i = 0; i < x; i++)
        for (j = 0; j < x; j++)
            a[i][j] = 0;
    
    k = 0;
    L = x;
    m = x / 2;

    for (i = 0; i <= m; i++)
    {
        L--;

        for (j = i; j <= L; j++)
        {
            k++;
            a[i][j] = k;
        }
    }

    for (i = m + 1; i <= x - 1; i++)
    {
        L--;

        for (j = L; j <= i; j++)
        {
            k++;
            a[i][j] = k;
        }
    }

    for (int y = 0; y < x; y++)
    {
        for (int z = 0; z < x; z++)
            printf("%3d", a[y][z]);
        printf("\n");
    }
}