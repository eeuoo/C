#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* 보수 구하기 */

// int main()
// {
//     int a[5], b1[5], b2[5];
//     int i = -1, c= 1;

//     do
//     {
//         i++;
//         scanf("%d", &a[i]);
//         b1[i] = 1 - a[i];

//     } while (i < 4);
    
//     do
//     {
//         b2[i] = b1[i] + c;
//         b2[i] = b2[i] % 2;
//         c = b1[i] * c;
//         i--;
//     } while (i >= 0);

//     for (int k = 0; k < 5; k++) 
//         printf("%d", a[k]);

//     printf("  ");

//     for (int k = 0; k < 5; k++)
//         printf("%d", b1[k]);

//     printf("  ");

//     for (int k = 0; k < 5; k++)
//         printf("%d", b2[k]);
// }

int main()
{
    int a[5], b[5];
    int i, c;

    for (i = 0; i <= 4; i++)
        scanf("%d", &a[i]);

    c = 1;

    for (i = 4; i >= 0; i++)
    {
        b[i] = a[i] - c;

        if (a[i] == 0 && c == 1)
            c = 1;
        else
            c = 0;
        
        b[i] = abs(b[i]);
    }

    for (i = 0; i <= 4; i++)
        b[i] = 1 - b[i];

    for (int k = 0; k <= 4; k++)
        printf("%d", a[k]);
    
    printf("  ");

    for (int k = 0; k <= 4; k++)
        printf("%d", b[k]);
}