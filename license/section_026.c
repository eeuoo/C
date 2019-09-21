#include <stdio.h>

/* 5의 배수의 개수와 합 */

#include <stdio.h>

int main()
{
    int cnt, hap, mok, nmg, i;
    cnt = 0, hap = 0;

    for (i = 1; i <= 100; i++)
    {
        mok = i / 5;
        nmg = i - mok * 5;

        if (nmg == 0)
        {
            cnt++;
            hap += i;
        }
    }

    printf("%d %d", cnt, hap);
}