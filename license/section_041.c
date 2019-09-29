#include <stdio.h>

/* 배열4 - 다이아몬드 만들기 */

int main()
{
    int i, j;
    int a[5][5] = {};
    int k = 0;
    int s = 2, e = 2;

    for (i = 0; i <= 4; i++)
    {
        for (j = s; j <= e; j++)
        {
            k++;
            a[i][j] = k;
        }

        if (i >= 2) 
        {
            s++;
            e--;
        }
        else
        {
            s--;
            e++;
        }
    
    }

    for (int x = 0; x <= 4; x++)
    {
        for (int y = 0; y <= 4; y++)
            printf("%3d", a[x][y]);
        printf("\n");
    }
}
