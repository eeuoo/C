#include <stdio.h>

int main()
{
    int i, j;
    i = j = 0;

    printf("go to 문의 테스트입니다.\n");

    do
    {
        printf("do-while 문의 %d번째 반복입니다.\n", i);

        for (j = 0; j < 10; j++)
        {
            if(i == 5)
                goto stop1;   // goto 문의 사용
            printf("for 문의 %d번째 반복입니다.\n", j);
        }
        
        i++;

    } while (i < 5);

    // goto 문이 시작되면 점프되는 위치, 세미콜론(;)이 아니라 콜론(:)을 쓴다는 점에 주의하세요.
    stop1:

    printf("프로그램을 종료합니다.");   
}