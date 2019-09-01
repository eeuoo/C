#include <stdio.h>

#define PI 3.141592  // 원주율 값을 상수로 정의

int main()
{
    float r;

    printf("반지름을 입력해주세요 : \n");
    printf("반지름 : ");
    scanf("%f", &r);  // 원의 반지름을 부동 소수점 형태로 입력 받음

    /* 원의 넓이와 둘레를 계산하여 출력 */
    printf("원의 넓이 : %10.2f\n", r * r * PI);
    printf("원의 둘레 : %10.2f\n", 2 * r * PI);
    return 0;
}