#include <stdio.h>

int main()
{
    float width, height;   // 폭과 높이를 저장할 변수 width와 height의 선언

    printf("사각형의 폭과 높이를 입력해주세요 : \n");
    printf("폭 : ");
    scanf("%f", &width);   // 사각형의 폭을 입력 받음

    printf("높이 : ");
    scanf("%f", &height);  // 사각형의 높이를 입력 받음

    printf("사각형의 넓이 : %10.2f\n", width * height);  // 사각형의 넓이를 계산하여 출력
    return 0;
}