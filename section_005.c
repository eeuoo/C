#include <stdio.h>

int main()
{
    // int i, j, k;
    // scanf("%d %d", &i, &j);

    // k = i + j;

    // printf("%d\n", k);

    // int A;

    // A = 3;
    // printf("%d\n", A);
    // A = 5 + 3;
    // printf("%d\n", A);
    // A = A + 5;
    // printf("%d\n", A);

    // int abc_1;
    // int 1abc;
    // int Kim;
    // int kim;
    // int for;
    // char kang

    // char aa = 'A';
    // printf("%c \n", aa);  // 문자 A
    // printf("%d \n", aa);  // 아스키 코드 65

    // char ab[6] = "KOREA"; // C언어에서 ""로 감싸진 건 문자열, 맨 마지막 널문자('\0')
    // printf("%s", ab);

    // short int si = 32768; // short는 최대 32767
    // int in = 32768;
    // float fl = 24.56f;    // 단정도 실수형 뒤에 f를 붙인다
    // double dfl = 24.5678; // 배정도 실수형

    // int i, j;
    // float aa;
    // char cc, dd[10];
    // scanf("%c \n", &cc);
    // scanf("%d %o\n", &i, &j);
    // scanf("%f", &aa);
    // scanf("%s", dd);

    // int i = 250;
    // float a = 125.23f;
    // float b = 314.1592e+5;
    // char c = 'A';
    // char dd[] = "Korea";

    // printf("10진수i = %d\n 8진수i = %o\n", i, i);
    // printf("a = %8.2f, b = %e\n", a, b);
    // printf("c값은 문자로 %c이고 아스키 코드로 %d이다.\n", c, c);
    // printf("%-10s, %10s\n\r", dd, dd); // 10자리를 확보해 출력

    // int a, b, c;
    // a = 5 % 3;
    // a--;
    // b = (a++) + 3;
    
    // printf("%d, %d\n", a, b);

    // c = (++a) + 3;

    // printf("%d, %d, %d\n", a, b, c);

    // int a = 5, b = 7, c, d, e, f;
    // c = a & b;
    // d = a | b;
    // e = a ^ b;
    // f = ~b;
    // a = a >> 1;
    // b = b << 3;
    // printf("%d, %d, %d, %d, %d, %d\n", a, b, c, d, e, f);

    int a = 2, b = 3, c, d, e;
    c = a > 3 && b > 2;
    d = a > 3 || b > 2;
    e = !c;
    printf("%d, %d, %d\n", c, d, e);
}