#include <stdio.h>

int main()
{
    int i;
    char buf[5] = {'a', 'b', 'c', 'd', 'e'};   // 배열 buf의 선언과 초기화

    printf("배열의 주소를 알아봅시다.\n");
    printf("buf의 주소 : %p\n", buf);  // 배열 buf의 시작 주소 출력

    printf("각 배열 항목의 주소를 알아봅시다.\n");

    for(i = 0; i < 5; i++)
        printf("buf[%d]의 주소 : 0x%p\n", i, &buf[i]);  // 배열 buf의 항목 주소 출력
}