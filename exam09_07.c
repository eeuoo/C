#include <stdio.h>
#include <mm_malloc.h>
#include <memory.h>

#define MAX 30

int main()
{
    char *buf[MAX];  // 문자형 포인터 배열 buf의 선언

    int i, j, k = 1;
    int size;

    printf(" 크기를 입력하시오 ");
    scanf("%d", &size);

    printf("\n");

    // for문을 이용하여 포인터 배열 buf의 할당과 메모리 초기화
    for(i = 0; i < size; i++) {
        buf[i] = (char*)malloc(sizeof(char)*size);
        memset(buf[i], 0, sizeof(char)*size);
    }

    // 포인터 배열 buf를 2차원 배열 buf처럼 사용하여 경사진 문자열 저장
    for(i = 0; i < size; i++) 
        for(i = size - 1; j < size; j++)
            buf[i][j] = k++;

    // 포인터 배열 buf의 값을 출력
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            if(buf[i][j] == 0) 
                printf(" ");
            else
                printf("%4d", buf[i][j]);
        }
    }

    printf("\n");
}