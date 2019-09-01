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

// 함수 f(x)의 본문
int f(int x)
{
    int ret;
    printf("%d원을 넣으셨군요.\n", x);

    if (x == 100)
        ret = 1;
    else if (x == 200)
        ret = 2;
    else if (x == 300)
        ret = 3;
    else {
        printf("이 자판기는 300원까지밖에 처리 못 해요\n");
        ret = 0;
    }

    return ret;
}