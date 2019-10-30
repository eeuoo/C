#include <stdio.h>

typedef union __TEST_UNION {
    unsigned char c_data[2];
    unsigned short s_data;
} TEST_UNION;

int main()
{
    TEST_UNION data;

    printf("0부터 65,535까지의 숫자 중에서 하나를 입력하세요.\n");
    printf("[0 ~ 65,535]");
    scanf("%d", &data.s_data);
    printf("입력한 수를 256으로 나누면 몫은 %d, 나머지는 %d입니다.\n", data.s_data / 256, data.s_data % 256);
    printf("공용체로 구하면 몫은 %d, 나머지는 %d입니다.\n", data.c_data[1], data.c_data[0]);
}