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