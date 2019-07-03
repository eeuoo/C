#include <stdio.h>

int main()
{
    printf("C언어에서 제공하는 자료형의 크기를 알아보자\n");
    printf("char 형의 크기 : %d\n", sizeof(char));
    printf("int 형의 크기 : %d\n", sizeof(int));
    printf("short 형의 크기 : %d\n", sizeof(short));
    printf("long 형의 크기 : %d\n", sizeof(long));
    printf("double 형의 크기 : %d\n", sizeof(double));
    printf("long double 형의 크기 : %d\n", sizeof(long double));

    return 0 ;
}