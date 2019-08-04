#include <stdio.h>

int Square(int);
int TripleSquare(int);

int main() 
{
    int num_1, num_2, ret;
    num_1 = 5;
    num_2 = 7;

    printf("함수의 사용 예제에 대해 알아봅시다.\n");

    ret = Square(num_1);
    printf("num_1의 제곱수는 : %d\n", ret);

    ret = Square(num_2);
    printf("num_2의 제곱수는 : %d\n", ret);

    ret = TripleSquare(num_1);
    printf("num_1의 세제곱수는 : %d\n", ret);

    ret = TripleSquare(num_2);
    printf("num_2d의 세제곱수는 : %d\n", ret);

    return 0;
}

int Square(int x)
{
    int ret;

    ret = x * x;
    return ret;
}

int TripleSquare(int x)
{
    int ret;

    ret = x * x * x;
    return ret;
}