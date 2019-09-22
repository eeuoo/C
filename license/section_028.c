#include <stdio.h>

/* 보수 구하기 */

int main()
{
    int a[5], b1[5], b2[5];
    int i = -1, c= 1;

    do
    {
        i++;
        scanf("%d", &a[i]);
        b1[i] = 1 - a[i];

    } while (i < 4);
    
    do
    {
        b2[i] = b1[i] + c;
        b2[i] = b2[i] % 2;
        c = b1[i] * c;
        i--;
    } while (i >= 0);

    for (int k = 0; k < 5; k++) 
        printf("%d", a[k]);

    printf("  ");

    for (int k = 0; k < 5; k++)
        printf("%d", b1[k]);

    printf("  ");

    for (int k = 0; k < 5; k++)
        printf("%d", b2[k]);
    
}