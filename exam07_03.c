#include <stdio.h>

int main()
{
    int a = 10;   // main() 함수 내에 선언된 지역 변수 a

    printf("지역 변수에 대한 테스트\n");
    printf("a의 값은 : %d\n", a);

    if (a == 10){
        int a = 7;  // if 문 안에서 선언되어 사용된 지역 변수 a
        printf("if 문의 코드 블록 안입니다.\n");
        printf("a의 값은 : %d\n", a);
    }

    printf("main() 함수의 코드 블록 안입니다.\n");
    printf("a의 값은 : %d\n", a);

    return 0;
}

printf("a의 값은 : %d\n", a); // -> 만약 이 주석을 풀면 변수 a를 인식하지 못해서 에러가 발생한다.