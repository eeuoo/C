#include <stdio.h>

/* 숫자의 좌우 위치 변경 */

int main()
{
    int i, j, m, k;
    int a[10] = { 1, 2, 3, 4, 5, 0, 0, 0, 0, 0 };

    i = 0;

    while (a[i] != 0)
        i++;

    j = i - 1;
    i = 0;
    m = (i + j) / 2;

    while (1)
    {
        k = a[i];
        a[i] = a[j];
        a[j] = k;

        if (i == m)
            break;

        i++;
        j--;
    }
    
    for (i = 0; i <= 9; i++)
        printf("%d", a[i]);
    
}