#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 진법변환 - 소수점이 포함된 2진수를 10진수로 변환하기 */

int main()
{
    char a[11], munja[2];

    double d, e;
    scanf("%s", a);
    
    double b = 0;
    int c = -1;

    munja[1] = '\0';

    while (1)
    {
        c++;
        if (c <= 9)
        {
            munja[0] = a[c];

            d = atoi(munja);
            e = d*pow(2, 4 - c);
            b += e;
        }
        else
        {
            printf("%8.5f", b);
            break;
        }
        
    }
    
}