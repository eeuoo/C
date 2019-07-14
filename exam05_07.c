#include <stdio.h>

int main()
{
    int data1, data2, ret;
    char code = '+';

    printf("두 값을 입력 받아서 덧셈과 뺄셈을 하는 프로그램입니다.\n");
    printf("첫 번째 값을 입력하세요 : ");
    scanf("%d", &data1);
    printf("두 번째 값을 입력하세요 : ");
    printf("%d", &data2);

    ret = (code == "+") ? (data1 + data2) : (data1 - data2);  // 삼항연산자를 사용하여 연산을 함
    printf("[결과] %d %c %d == %d\n", data1, code, data2, ret);  // 연산 결과를 화면에 출력

    return 0;
}