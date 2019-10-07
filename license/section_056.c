#include <stdio.h>

/* 반 배정 */

int main()
{
    int i, x1, x2, hap, nmg, cnt, ban;
    int a[21];

    for (i = 0; i <= 20; i++)
        a[i] = 0

    scanf("%d %d", &x1, &x2);

    hap = x1 + x2;

    nmg = hap - hap / 21 * 21;

    if (nmg == 0)
        nmg = 21;

    cnt = 0;
    ban = 0;

    while (1)
    {
        ban++;

        if (ban > 3)
            ban = 1;
        
        a[nmg - 1] = ban;

        cnt++;

        if (cnt >= 21)
            break;

        for (i = 1; i <= 4; i++)
        {
            nmg++;

            if (nmg > 21)
                nmg = 1;
            
            if (a[nmg - 1] != 0)
                i--;
        }
    }

    for (i = 0; i < 21; i++)
        printf("%d ", a[i]);
}