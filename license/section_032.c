#include <stdio.h>

/* 버블 정렬 */

// int main()
// {
//     int n, i, j, k;
//     int data[10];
//     n = -1;

//     do
//     {
//         n++;
//         scanf("%d", &data[n]);

//     } while (n < 9);
    

//     i = 0;

//     do
//     {
//         i++;
//         j = -1;

//         do
//         {
//             j++;
            
//             if (data[j] > data[j + 1])
//             {
//                 k = data[j];
//                 data[j] = data[j + 1];
//                 data[j + 1] = k;
//             }
//         } while (j < 9 - i);
        
//     } while (i < 9);
    
//     for (int x = 0; x <= 9; x++)
//         printf("%d ", data[x]);
// }

// int main()
// {
//     int n, i, j, k;
//     int data[10];
//     n = -1;

//     do
//     {
//         n++;
//         scanf("%d", &data[n]);

//     } while (n < 9);
    
//     for (i = 1; i <= 9; i++)
//     {
//         for (j = 0; j <= 9 - 1; j++)
//         {
//             if (data[j] > data[j + 1])
//             {
//                 k = data[j];
//                 data[j] = data[j + 1];
//                 data[j + 1] = k;
//             }
//         }
//     }

//     for (int x = 0; x < 10; x++)
//         printf("%d ", data[x]);
// }


/* 중간 종료 */

int main()
{
    int n, i, j, sw, cnt, k;
    int data[10];
    n = -1;

    do
    {
        n++;
        scanf("%d", &data[n]);

    } while (n < 9);

    cnt = 0;

    for (i = 1; i <= 9; i++)
    {
        sw = 0;

        for (j = 0; j <= (9 - i); j++)
        {
            if (data[j] > data[j + 1])
            {
                k = data[j];
                data[j] = data[j + 1];
                data[j + 1] = k;
                cnt++;
                sw = 1;
            }
        }

        if (sw == 0)
            break;
    }

    printf("%d ", cnt);

    for (int x = 0; x <= 9; x++)
        printf("%d", data[x]);
    
}