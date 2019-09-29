#include <stdio.h>

/* 배열 1 - 기본 5행 5열 */

// 행 고정 열 변화
// int main()
// {
//     int i, j, k;
//     int a[5][5];

//     k = 0;

//     for (i = 0; i <= 4; i++)
//     {
//         for (j = 0; j <= 4; j++)
//         {
//             k++;
//             a[i][j] = k;
//         }
//     }

//     for (int x = 0; x <= 4; x++)
//     {
//         for (int y = 0; y <= 4; y++)
//             printf("%3d", a[x][y]);
//         printf("\n");
//     }
// }

// 열 고정 행 변화
#define LENGTH 5

int main()
{
    int i, j, k;
    int a[5][5];

    k = 0;

    for (i = 0; i <= LENGTH - 1; i++)
    {
        for (j = 0; j <= LENGTH - 1; j++)
        {
            k++;
            a[j][i] = k;
        }
    }

    for (int x = 0; x <= LENGTH - 1; x++)
    {
        for (int y = 0; y <= LENGTH - 1; y++)
            printf("%3d", a[x][y]);
        printf("\n");
    }
}
