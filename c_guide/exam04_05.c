#include <stdio.h>

int main()
{
    char a = 'A';

    printf(" 문자형 a의 문자 표시 : %c\n", a);
    printf(" 문자형 a의 정수 표시 : %d\n", a);
    printf(" 문자형 a의 16진수 표시 : %x\n\n", a);

    a = a + 1;

    printf(" 문자형 a의 문자 표시 : %c\n", a);
    printf(" 문자형 a의 정수 표시 : %d\n", a);
    printf(" 문자형 a의 16진수 표시 : %x\n\n", a);

    return 0;
}