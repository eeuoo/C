#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main()
{
    char *buf;

    int i, size;

    printf(" 4 이상의 수를 입력하시오. ");
    scanf("%d". &size);

    printf("\n");

    // 사용자가 입력한 size 값으로 size X size 크기의 메모리를 할당
    buf = (char *)malloc(sizeof(char) * size * size);

    i = 0

    // 제어변수 i가 size보다 작은 경우 25행부터 32행 실행
    while (i < size)
    {
        // 현재 주소에서 size만큼을 '*' 문자로 초기화
        memset(buf + (size * i++), '*', size);

        if (i < size)
            // 현재 주소에서 size만큼을 '$'문자로 초기화
            memset(buf + (size * i++), '$', size);
        else
            break;
    }

    // buf의 모든 데이터를 출력함
    for (i = 1; i <= size*size; i++)
    {
        printf("%3c", buf[i-1]);
        if(i%size == 0) printf("\n");
    }

    free(buf);
}