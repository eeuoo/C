#include <stdio.h>

int main()
{
    int i = 0;
    char buf[13];  // 배열 buf의 선언

    printf("소문자 12개를 입력해 보세요.\n");
    printf("입력 : ");

    while (i < 12)
    {
        scanf("%c", &buf[i]);  // 배열 buf에 사용자 입력값을 저장
        
        i++;
    }
    
    printf("문자를 입력하셨군요. 대문자로 변환합니다.\n");

    for(i = 0; i < 12; i++)
        printf("%c", buf[i] -('a'-'A'));  // 배열 buf의 값을 대문자로 변환하여 출력
}