#include <stdio.h>

int main()
{
    float num_1, num_2;
    float data1, data2;

    num_1 = num_2 = 4.352;
    data1 = data2 = 3.141592;

    printf(" 대입 연산자에 대해 알아봅시다\n");
    num_1 += num_2 -= data1 *= data2 /= 2;  // 여러 개의 대입 연산자를 사용함

    printf("num_1 : [%-10.3f]\n", num_1);
    printf("num_2 : [%-10.3f]\n", num_2);
    printf("data1 : [%-10.3f]\n", data1);
    printf("data2 : [%-10.3f]\n", data2);

    return 0;
}