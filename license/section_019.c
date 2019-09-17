#include <stdio.h>

/* 최대공약수, 최소공배수 */

int main()
{
    int a, b, big, small, mok, nmg, gcm, lcm;
    scanf("%d %d", &a, &b);

    if (a >= b)
    {
        big = a;
        small = b;
    }
    else
    {
        big = b;
        small = a;
    }

    while (1)
    {
        mok = big / small;
        nmg = big - mok * small;

        if (nmg == 0)
        {
            gcm = small;
            lcm = a * b / gcm;
            printf("%d %d", gcm, lcm);
            break;
        }

        big = small;
        small = nmg;
    }
    
}