#include <stdio.h>
#include <memory.h>
#include <stdlib.h>

int main()
{
    char *buf;
    int i;

    printf("buf의 할당\n");

    // 포인터 buf에 malloc() 함수를 사용하여 메모리 할당
    buf = (char *) malloc(sizeof(char) * 5);

    for (i = 0; i < 5; i++) {
        printf("%d번째의 값 : %x\n", i, *buf++);      // buf가 가리키는 메모리의 값 출력
    }

    buf -= 5;  // 포인터 buf를 처음 위치로 이동

    print("memset() 함수 사용 \n");
    memset(buf, '*', 5);

    for (i = 0; i < 5; i++) {
        printf("%d번째의 값 : %c\n", i, *buf++);      // buf가 가리키는 메모리의 값 출력
    }

    buf -= 5;     // 포인터 buf를 처음 위치로 이동
    free(buf);    // buf에 할당되어 있는 메모리 해제 