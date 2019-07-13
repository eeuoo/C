#include <stdio.h>

int main()
{
    int a = 0xF0;
    int b = 0x0F;

    int c = 0x0A;
    int d = 0x0B;

    int e = 0x02;
    int f = 0x08;

    printf("a & b의 결과는 : %x\n", a & b);
    printf("a | b의 결과는 : %x\n", a | b);
    printf("\n");
    printf("c ^ d의 결과는 : %x\n", c ^ d);
    printf("~a의 결과는 : %x\n", ~a);
    printf("\n");

    printf("e << 2의 결과는 : %x\n", e << 2);
    printf("f >> 2의 결과는 : %x\n", f >> 2);
    return 0;
}
