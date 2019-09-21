#define FIND 7

#include <stdio.h>

/* 7에 가장 가까운 수 구하기 */

int main()
{
    // int i, j, k, L, m;
    // int a[10];

    // i = -1;

    // do
    // {
    //     i++;
    //     scanf("%d", &a[i]);

    // } while (i < 9);

    // j = 9;

    // for (k = 0; k <= 9; k++)
    // {
    //     if (a[k] >= FIND)
    //         L = a[k] - FIND;
    //     else
    //         L = FIND - a[k];

    //     if (L <= j)
    //     {
    //         j = L;
    //         m = a[k];
    //     }
    // }
    
    // printf("%d", m);

    int m, n, x, s;
    int k[10] = {1,2,3,4,7,6,8,9,3,6};

    m = 9;
    n = -1;

    do
    {
        n++;
        if (k[n] < 5)
            x = 5 - k[n];
        else
            x = k[n] - 5;

        if (m > x)
        {
            m = x;
            s = k[n];
        }

    } while (n < 9);
    
    printf("%d", s);
}