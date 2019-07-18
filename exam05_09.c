#include <stdio.h>

int main()
{
    int x, y, z;

    x = 2;
    y = 3;

    /* 여러분들은 코드를 이렇게 만들면 절대 안됩니다 */
    z = x + y * 2 - ++x * ( y++ / 3);

    printf("x의 값은 : %d\n", x);
    printf("y의 값은 : %d\n", y);
    printf("x + y * 2 - ++x * (y++ / 3)의 결과는 : %d\n", z);

    x = 1;
    y = 0;

    x = x << 1 || y;
    y += ++y;

    printf("x의 값은 : %d\n", x);
    printf("y의 값은 : %d\n", y);

    return 0;
}