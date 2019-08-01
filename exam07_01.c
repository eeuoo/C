#include <stdio.h>

int f(int);  // 함수의 프로토타입을 정의

int main()
{
    int coin = 100;
    int NumOfCoffee;

    printf("함수는 자동판매기와 똑같습니다.\n");
    printf("동전을 넣어주세요 : ");
    scanf("%d", &coin);
    NumOfCoffee = f(coin);   // 변수 coin을 함수의 파라미터로 사용

    printf("%d잔의 커피가 나왔습니다.\n", NumOfCoffee);

    return 0;
}