#include <stdio.h>
#include <stdlib.h>
// malloc 함수와 free() 함수를 사용하기 위해 stdlib.h 헤더파일을 인클루드 함.

int main()
{
    char *buf[5];  // 문자형 포인터를 항목으로 가지는 배열 buf를 선언
    int i;

    printf("malloc() 함수의 사용\n");

    for (i = 0; i < 5; i++)
    {
        // malloc() 함수를 사용하여 각 배열 항목마다 10바이트의 메모리를 할당
        buf[i] = 'A' + i;

        printf("buf[i]의 시작 주소 : %p\n", buf[i]);
        printf("buf[i]의 첫 번째 항목 :  %c\n", *buf[i]);
    
    }

    printf("free() 함수의 사용\n");

    for (i = 0; i < 5; i++)
    {
        free(buf[i]);
        
        printf("buf[i]의 시작 주소 : %p\n", buf[i]);
        printf("buf[i]의 첫 번째 항목 :  %c\n", *buf[i]);
    }
}