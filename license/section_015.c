#include <stdio.h>

int main()
{
    // int hap, cnt, c;
    // int a = 1, b = 1;

    // hap = 2;
    // cnt = 2;
    // while (1)
    // {
    //     c = a + b;
    //     hap += c;
    //     cnt++;
    //     if (cnt < 20)
    //     {
    //         a = b;
    //         b = c;
    //     }
    //     else
    //     {
    //         printf("%d", hap);
    //         break;
    //     }
    // }

    int a, b, y, n, k, c;
    a = 1, b = 1;
    y = 2;
    scanf("%d", &n);
    for(k = 3; k <= n; k++) 
    {
        c = a + b;
        y += c;
        a = b;
        b = c;
    }
    printf("%d", y);
}