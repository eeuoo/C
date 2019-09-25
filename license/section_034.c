#include <stdio.h>

/* 석차 구하기 */

int main()
{
    int m, n, i, j;
    int jumsu[10], rank[10];

    m = -1;

    do
    {
        m++;
        scanf("%d", &jumsu[m]);

    } while (m < 9);

    n = 9;
    i = 0;

    while (i <= n)
    {
        rank[i] = 1;
        i++;
    }
    
    i = 0;

    while (i <= n)
    {
        j = 0;

        while (j <= n)
        {
            if (jumsu[i] < jumsu[j])
                rank[i]++;
            j++;
        }

        i++;
    }
    
    for (int x = 0; x < 10; x++)
        printf("%d ", jumsu[x]);

    printf("\n");

    for (int x = 0; x < 10; x++)
        printf("%d ", rank[x]);
    
}