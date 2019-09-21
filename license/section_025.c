#include <stdio.h>

/* 최댓값, 최솟값 구하기 */

// int main ()
// {
//     int i;
//     int a[10];
//     int j = -1, max = 0;

//     do
//     {
//         j++;
//         scanf("%d", &a[j]);

//     } while (j < 9);
    
//     for (i = 0; i <= 9; i++)
//     {
//         if (a[i] > max)
//             max = a[i];
//     }

//     printf("%d", max);
// }


/* 최댓값, 최솟값을 제외한 평점의 평균 구하기 */

int main()
{
    int m, min, max, hap, avg, i;
    int a[7];

    m = -1;

    do
    {
        m++;
        scanf("%d", &a[m]);

    } while (m < 6);

    min = a[0];
    max = a[0];
    hap = a[0];
    i = 0;

    while (i < 6)
    {
        i++;
        hap += a[i];
        if (a[i] < min)
            min = a[i];
        if (a[i] > max)
            max = a[i];
    }

    hap = hap - min - max;
    avg = hap / 5;

    printf("%d %d %d %d", min, max, hap, avg);
    
    
}