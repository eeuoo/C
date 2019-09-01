#include <stdio.h>

int main()
{
    int i;
    char buf[5] = {'a', 'b', 'c', 'd', 'e'};
    char *pbuf;
    pbuf = buf;  // 포인터 pbuf가 배열 buf를 가리키도록 함

    printf("배열 buf의 주소 : 0x%p\n", buf);
    printf("포인터 puf의 주소 : 0x%p\n", pbuf);

    printf("배열과 포인터의 주소와 값을 알아봅시다.\n");

    for(i = 0; i < 5; i++) {
        printf("buf[%d]의 주소 : 0x%p, 값 : %c\n", i, &buf[i], buf[i]);
        printf("pbuf의 주소 : 0x%p, 값 : %c\n", pbuf, *pbuf);

        // 포인터 pbuf의 주소 증가, 배열 buf에 증가 연산자를 사용하여 buf++;로 하는 것은 오류입니다.
        pbuf++;
    }
}