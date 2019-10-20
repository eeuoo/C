#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *pBuf, *iBuf;
    int i;

    printf("C 프로그래밍에서의 포인터를 이용한 메모리 할당 예제\n");

    pBuf = (char *)malloc(10);

    iBuf = pBuf;

    for (i = 0; i < 10; i++)
        *pBuf++ = i + 'A';

    pBuf = iBuf;

    for (i = 0; i < 10; i++)
        printf("%c ", *pBuf++);
    
    free(pBuf);
}