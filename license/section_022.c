#include <stdio.h>

/* 진법변환 - 10진수를 2진수로 변환하기 */

int main()
{
    int b, bb, c, mok, nmg = 0, i;
    int a[10];

    scanf("%d", &b);
    bb = b;
    c = -1;

    do
    {
        c++;
        mok = b / 2;

        nmg = b - mok * 2;
        a[c] = nmg;
        b = mok;

    } while (mok != 0);

    printf("%d \n", bb);

    for (i = c; i >= 0; i--)
        printf("%d", a[i]);
    
}