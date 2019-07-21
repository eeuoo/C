#include <stdio.h>

int main()
{
    int your_height;

    printf("여러분의 키를 입력하세요. 단위는 cm입니다. \n");
    printf("나의 키 : ");
    scanf("%d", &your_height);    //scanf() 함수를 사용하여 사용자로부터 키 값을 입력 받음

    printf("\n");
    printf("키가 %d이시군요. \n", your_height);   // 변수 your_height에 저장되어 있는 값을 출력
    
    // if 문의 조건이 참인 경우의 실행할 코드 블록
    if (your_height > 175) {
        printf("키가 크시네요.\n");
        printf("평균 키보다 %d cm만큼 더 크시네요.", (your_height - 175));
    }
    // if 문의 조건이 거짓인 경우의 실행할 코드 블록
    else {
        printf("키가 큰 편은 아니시군요.\n");
        printf("평균 키보다 %d cm만큼 작으시네요.", (175 - your_height));
    }

    return 0;
}