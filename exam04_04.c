#include <stdio.h>

main()
{
    float a = 10.0;
    double b = 10.0;

    int i = 0;

    while (i < 10)
    {
        a = a / 3.0;
        printf("float형의 출력 결과 : %1.20G\n", a);

        b = b / 3.0;
        printf("double형의 출력 결과 : %1.20G\n\n", b);
        i++;
    }
}