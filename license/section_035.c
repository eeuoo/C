#include <stdio.h>

/* 이분 검색 */

// int main()
// {
//     int j, L, h, m;
//     int data[10] = {8, 15, 35, 55, 60, 61, 70, 80, 92, 99};

//     scanf("%d", &j);
//     L = 0;
//     h = 9;

//     while (1)
//     {
//         if (L <= h)
//         {
//             m = (L + h) / 2;

//             if (j == data[m])
//             {
//                 printf("%d %d", j, m + 1);
//                 break;
//             }

//             if (j < data[m])
//                 h = m - 1;
//             else
//                 L = m + 1;
//         }
//         else
//         {
//             printf("%d NOT FOUND", j);
//             break;
//         }
//     }
    
// }

/* 2차원 배열 */
int main()
{
    int j, L, h, m;
    int data[2][10] = {
        {1,2,3,4,5,6,7,8,9,10},
        {100,66,25,88,90,65,87,86,58,99}
    }

    scanf("%d", &j);

    L = 0;
    h = 9;

    while (1)
    {
        if (L + h) 
        {
            m = (L + h) / 2;

            if (j == data[0][m])
            {
                printf("%d %d\n", j, data[1][m]);
                break;
            }

            if (j < data[0][m])
                h = m - 1;
            else
                L = m + 1;
        }
        else
        {
            printf("%d NOT FOUND!", j);
            break;
        }
        
    }
    
}