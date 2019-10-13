#include <stdio.h>
#include <memory.h>

int main()
{
    char src[5] = { 'a', 'b', 'c', 'd', 'e'};
    char dst[5] = { 'f', 'g', 'h', 'i', 'j'};

    int i;

    printf("src와 dst의 초기값 출력\n");
    printf("\tsrc[]\t\tdst[]\n");

    for (i = 0; i < 5; i++) {
        printf("src[%d] : %c\t", i, src[i]);
        printf("dst[%d] : %c\n", i, dst[i]);
    }
    
    printf("memcpy() 함수 사용 \n");

    // memcpy() 함수를 사용하여 배열 src의 값을 dst로 복사
    memcpy(dst, src, sizeof(src));

    for (i = 0; i < 5; i++) {
        printf("src[%d] : %c\t", i, src[i]);
        printf("dst[%d] : %c\n", i, dst[i]);
    }

}