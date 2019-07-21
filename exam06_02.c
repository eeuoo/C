#include <stdio.h>

int main()
{
    int your_height;

    printf("여러분의 키를 입력하세요. 단위는 cm입니다. \n");
    printf("나의 키 : ");
    scanf("%d", &your_height);    //scanf() 함수를 사용하여 사용자로부터 키 값을 입력 받음

    printf("\n");
    printf("키가 %d이시군요. \n", your_height);   // 변수 your_height에 저장되어 있는 값을 출력
    
}