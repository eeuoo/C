#include <stdio.h>
#include <math.h>

/* 소인수 분해하기 */

int main()
{
    int b, c, d, e, mok, nmg;
    int a[100];

    scanf("%d", &b);
    c = -1;

    while (1)
    {
        d = 2;
        e = (int)sqrt(b);

        while (1)
        {
            if (d > e)
            {
                d = b;
                break;
            }

            mok = b / d;
            nmg = b - mok*d;

            if (nmg == 0)
                break;
            else
                d++;
        }

        c++;
        a[c] = d;

        if (b == d)
            break;

        b = mok;
        
    }
    
    for (int i = 0; i <= c; i++)
        printf("%d\n", a[i]);
}