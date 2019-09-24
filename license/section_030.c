#include <stdio.h>

/* 큰 수 더하기 */

// int main()
// {
//     int i, j, mok, nmg;
//     int a[12], b[14] = { 0 };

//     while (1)
//     {
//         for (i = 0; i <= 11; i++)
//             scanf("%d", &a[i]);

//         if (a[0] == 0)
//             break;
//         else 
//             for (i = 0; i <= 11; i++)
//                 b[i + 2] += a[i];
//     }

//     for (i = 13; i >= 1; i--)
//     {
//         mok = b[i] / 10;
//         nmg = b[i] - mok * 10;

//         b[i] = nmg;
//         b[i - 1] += mok;
//     }
    
//     if (b[0] == 0)
//         j = 1;
//     else
//         j = 0;

//     for (i = j; i <= 13; i++)
//         printf("%d", b[i]);
// }


/* 2진수 더하기 */

int main()
{
    int i, z, c, j;
    int x[10], y[10], a[10];

    for (i = 0; i <= 9; i++)
        scanf("%d", &x[i]);

    for (i = 0; i <= 9; i++)
        scanf("%d", &y[i]);

    z = 0, c = 0, j = 9;

    do
    {
        z = x[j] + y[j] + c;
        if (z < 2)
        {
            c = 0;
            a[j] = z;
        }
        else
        {
            c = 1;
            a[j] = z - 2;
        }
        
        j--;

    } while (j >= 0);
    
    if (c == 0)
    {
        do
        {
            j++;
            printf("%d", a[j]);

        } while (j < 9);
        
    }
    else
        printf("OVERFLOW!");
}