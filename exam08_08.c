#include <stdio.h>

int Square(int, int);  // 제곱근과 세제곱근을 구하는 함수

int main()
{
    int num, Level;
    int ret;

    printf("C프로그래밍에서의 포인터 사용 예제 - 두 번째(변수 사용)\n");

    Level = 2;
    num = 3;
    ret = Square(Level, num);  // 3의 2승
    printf("Level : %d Return Value : %d\n", Level, ret);
    printf("\n");

    Level = 3;
    num = 4;
    ret = Square(Level, num);  // 4의 3승
    printf("Level : %d Return Value : %d\n", Level, ret);
}

int Square(int lv, int num)
{
    if(lv == 2)
        return num * num;
    else if(lv == 3)
        return num * num * num;
    else 
        return 0;
}