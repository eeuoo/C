#include <stdio.h>

/* 석차 구하기 */

// int main()
// {
//     int m, n, i, j;
//     int jumsu[10], rank[10];

//     m = -1;

//     do
//     {
//         m++;
//         scanf("%d", &jumsu[m]);

//     } while (m < 9);

//     n = 9;
//     i = 0;

//     while (i <= n)
//     {
//         rank[i] = 1;
//         i++;
//     }
    
//     i = 0;

//     while (i <= n)
//     {
//         j = 0;

//         while (j <= n)
//         {
//             if (jumsu[i] < jumsu[j])
//                 rank[i]++;
//             j++;
//         }

//         i++;
//     }
    
//     for (int x = 0; x < 10; x++)
//         printf("%d ", jumsu[x]);

//     printf("\n");

//     for (int x = 0; x < 10; x++)
//         printf("%d ", rank[x]);
    
// }

/* 바로 출력 */
int main()
{
    int i, j, r;
    int kuk[10], mat[10], hap[10];

    i = -1;

    do
    {
        i++;
        scanf("%d %d", &kuk[i], &mat[i]);
        hap[i] = kuk[i] + mat[i];

    } while (i < 9);
    
    for (i = 0; i <= 9; i++)
    {
        if (hap[i] != 0)
        {
            r = 1;
            
            for (j = 0; j <= 9; j++)
            {
                if (hap[i] < hap[j])
                    r++;
            }

            printf("%d %d %d %d %d\n", i+1, kuk[i], mat[i], hap[i], r);
        }
    }
}