#include <stdio.h>

int main()
{
    // int a = 10, even = 0, odd = 0;
    // for (int i = 1; i <= a; ++i) {
    //     if (i % 2 == 0)
    //         even += 1;
    //     else
    //         odd += 1;
    // }

    // printf("%d, %d\n", even, odd);

    // int a = 15, b = 0;

    // if (a >10)
    //     b = a - 10;

    // b = b + (10 - b);

    // printf("%d\n",b);

    // int a = 10, b = 20, cha;
    // if (a > b)
    //     cha = a - b;
    // else
    //     cha = b - a;
    // printf("%d\n", cha);

    // int jum = 100;
    // if (jum >= 90) {
    //     printf("학점은 A입니다.\n");
    // } else if (jum >= 80) {
    //     printf("학점은 B입니다.\n");
    // } else if (jum >= 70) {
    //     printf("학점은 C입니다.\n");
    // } else if (jum >= 60) {
    //     printf("학점은 D입니다.\n");
    // } else {
    //     printf("학점은 F입니다.\n");
    // } 

    // int jum = 85;
    // switch ( jum / 10)
    // {
    //     case 10:
    //     case 9:
    //         printf("학점은 A입니다.\n");
    //         break;
    //     case 8:
    //         printf("학점은 B입니다.\n");
    //         break;
    //     case 7:
    //         printf("학점은 C입니다.\n");
    //         break;
    //     case 6:
    //         printf("학점은 D입니다.\n");
    //         break;
    //     default:
    //         printf("학점은 F입니다.\n");
    //         break;
    // }

    // int i, hap = 0;
    // for (i = 1; i <= 10; ++i)
    //     hap += i;
    // printf("%d, %d\n", i, hap);

    int i = 0, hap = 0;
    while (i < 10)
    {
        i++;
        hap += i;
    }
    printf("%d, %d\n", i, hap);
    
}