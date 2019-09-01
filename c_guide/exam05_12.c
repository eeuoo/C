#include <stdio.h>

int main()
{
    char data;

    printf("알파벳 대소문자 중에서 하나를 입력해보세요.\n");
    printf("입력 => ");
    scanf("%c", &data);

    /* 삼항 연산자를 사용하여 입력 받은 data의 값을 대문자 -> 소문자 혹은 소문자 -> 대문자로 변환 */
    data = (data >= 'A' && data <= 'Z') ? data + ('a'-'A') : (data >= 'a' && data <= 'Z') ? data - ('a'-'A') : data;

    printf("출력 => %c\n", data);

    return 0 ;
}