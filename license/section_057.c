#include <stdio.h>

/* 역순으로 숫자 더하기 */

int main()
{
    int x, i, k, mok, nmg, m, j;
    int a[6];

    while (1)
    {
        scanf("%d", &x);

        if (x == 99999)
            break;

        k = x;

        for (i = 0; i <= 5; i++)
        {
            mok = x / 10;
            nmg = x - mok * 10;
            
            a[i] = nmg;
            x = mok;
        }

        m = 0;

        for (i = 0; i <= 5; i++)
        {
            if (a[i] != 0)
                break;
        }

        for (j = i; j <= 4; j++)
        {
            m += a[j];
            m *= 10;
        }

        m += a[5];
        x = m + k;
        
        printf("%d %d %d\n", k, m, x);
    }
    
}