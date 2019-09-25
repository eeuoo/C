#include <stdio.h>

/* 삽입 정렬 */

// int main()
// {
//     int j, i, k, key;
//     int a[10];
//     j = -1;

//     do
//     {
//         j++;
//         scanf("%d", &a[j]);

//     } while (j < 9);
    
//     for (i = 1; i <= 9; i++)
//     {
//         key = a[i];

//         for (k = i - 1; k >= 0; k--)
//         {
//             if (a[k] > key)
//                 a[k + 1] = a[k];
//             else
//                 break;
//         }

//         a[k + 1] = key;
//     }

//     for (i = 0; i <= 9; i++)
//         printf("%d", a[i]);
// }

/* if문 사용 */
int main()
{
    int i, k, key;
    int a[20] = {9, 7, 4, 6, 3, 1, 8, 2, 5, 10, 19, 17, 14, 16, 13, 11, 18, 12, 15, 20};

    i = 1;

    do
    {
        key = a[i];
        k = i - 1;

        do
        {
            if (key < a[k])
            {
                a[k + 1] = a[k];
                k--;
            }
            else
                break;
            
        } while (k >= 0);

        a[k + 1] = key;
        i++;
        
    } while (i <= 19);
    
    for (i = 0; i <= 19; i++)
        printf("%d ", a[i]);
}