#include <stdio.h>

/* 사과 구입 */

int main()
{
    int i, j, k, cnt, hap;
    cnt = 0;

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            for(k = 1; k <= 10; k++)
            {
                hap = i * 200 + j * 300 + k * 400;

                if (hap == 3000)
                {
                    cnt++;
                    printf("%d %d %d %d\n", cnt, i, j, k);
                }
            }
        }
    }
}