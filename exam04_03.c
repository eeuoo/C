#include <stdio.h>

int main()
{
    float a = 1.123456789123456789;    // float 형
    double b = 1.123456789123456789;   // double 형

    // 1자리의 실수 자리와 20자리의 소수 자리로 출력
    printf("a의 출력 결과 : %1.20G\n", a);
    printf("b의 출력 결과 : %1.20G\n", b);

    return 0;
}