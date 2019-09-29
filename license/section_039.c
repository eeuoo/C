#include <stdio.h>

/* 배열2 - 직각 삼각형 만들기 */

// 왼쪽 직각 삼각형 만들기
// int main()
// {
//     int i, j, k;
//     int a[5][5] = { };

//     k = 0;

//     for (i = 0; i <= 4; i++)
//     {
//         for (j = 0; j <= i; j++)
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

// 오른쪽 직각 삼각형 만들기
// int main()
// {
//     int i, j, k;
//     int a[5][5] = {};

//     k = 0;

//     for (i = 0; i <= 4; i++)
//     {
//         for (j = 4 - i; j <= 4; j++)
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

// 왼쪽 직각 삼각형 오른쪽부터 채우기
int main()
{
    int i, j, k;
    int a[5][5] = {};

    k = 0;

    for (i = 0; i <= 4; i++)
    {
        for (j = i; j >= 0; j--)
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