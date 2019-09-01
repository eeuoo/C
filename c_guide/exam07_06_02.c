#include <stdio.h>

void Display_gugudan(void);   // 함수 Display_gugudan()의 프로토타입
int num;  // 변수 nun를 전역 변수로 선언

void Display_gugudan(void)
{
    int i;
    for(i = 1; i < 10; i++)
    {
        printf("%d X %d = %d\n", num, i, (num * i));
    }
}