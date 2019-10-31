#include <stdio.h>

typedef union _BYTE {
    unsigned char byte;
    struct _bit
    {
        unsigned char B0 : 1;
        unsigned char B1 : 1;
        unsigned char B2 : 1;
        unsigned char B3 : 1;
        unsigned char B4 : 1;
        unsigned char B5 : 1;
        unsigned char B6 : 1;
        unsigned char B7 : 1;
    } bit;
} BYTE;

int main()
{
    BYTE data;

    printf("0부터 255까지의 값을 입력해 보세요.\n");
    printf("입력한 10진수 값을 2진수로 바꾸어서 출력합니다.\n");
    printf("[10진수] : ");
    scanf("%d", &data.byte);

    printf("입력한 10진수 값을 2진수로 변경하면 다음과 같습니다.\n");
    printf("%d", data.bit.B7);
    printf("%d", data.bit.B6);
    printf("%d", data.bit.B5);
    printf("%d", data.bit.B4);
    printf("%d", data.bit.B3);
    printf("%d", data.bit.B2);
    printf("%d", data.bit.B1);
    printf("%d", data.bit.B0);
    printf("\n");
}