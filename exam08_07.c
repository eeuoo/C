#include <stdio.h>

vodi Square(int, int *);  // 제곱근과 세제곱근을 구하는 함수

int main()
{
    int num, Level;

    printf("C프로그래밍에서의 포인터 사용 예제 - 두 번째\n");

    Level = 2;
    num = 3;
    Square(Level, &num);  // 3의 2승
    printf("Level : %d Return Value : %d\n", Level, num);
    printf("\n");

    Level = 3;
    num = 4;
    Square(Level, &num);  // 4의 3승
    printf("Level : %d Return Value : %d\n", Level, num);
}

void Square(int lv, int *ret)
{
    if(lv == 2)
        *ret = *ret * *ret;
    else if(lv == 3)
        *ret = *ret * *ret * *ret;
}