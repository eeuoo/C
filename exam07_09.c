#include <stdio.h>

void drawStar()

int main()
{
    int num;
    int line;

    printf("정적 변수를 사용한 별 출력 프로그램. \n");
    printf("줄 수를 입력하세요.");
    scanf("%d", &line);  // 사용자로부터 출력할 행 수를 입력 받음

    printf("\n");

    for(num = 0; num < line; num++)
        drawStar();  // 입력 받은 행 수만큼 반복하여 drawStar() 함수를 호출함
}

void drawStart()
{
    // 현재 행에 출력할 '*' 문자의 개수를 저장하는 정적 변수 number의 선언과 초기화
    static int number = 1;
    int i;

    // 1부터 정적 변수 number까지 반복하여 '*'문자 출력
    for(i = 0; i < number; i++)
        printf("* ");
    number++;  // 정적 변수 number를 1 증가

    printf("\n");
}