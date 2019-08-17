#include <stdio.h>

int main()
{
    // 6개의 항목을 갖는 배열 buf의 선언 및 초기화
    char buf[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
    char *ptr = buf;  // 포인터 변수 ptr이 배열 buf를 가리키도록 함

    int i = 0;
    printf("ptr을 1씩 증가시켜 봅시다\n");

    // for문과 포인터 변수 ptr을 이용하여 배열 buf의 데이터들을 출력
    for(i = 0; i < 6; i++) {
        printf("ptr : %p , *ptr : %c\n", ptr, *ptr);
        ptr++;
    }

    printf("\n다시 ptr이 buf를 가리키게 합시다\n");
    ptr = buf;  // 배열 buf의 처음 주소를 포인턴 ptr이 가리키도록 함

    printf("*ptr의 결과\n");
    //*ptr++;
    printf("ptr : %p , *ptr : %c\n", ptr, *ptr);

    printf("*(ptr++)의 결과\n");
    //*(ptr++);
    printf("ptr : %p , *ptr : %c\n", ptr, *ptr);

    printf("--ptr을 하고 *(ptr++)의 결과\n");
    --ptr;
    //*(ptr++);
    printf("ptr : %p , *ptr : %c\n", ptr, *ptr);

    printf("(*ptr)++의 결과\n");
    //(*ptr)++;
    printf("ptr : %p , *ptr : %c\n", ptr, *ptr);

    printf("ptr += 1을 하고 *ptr의 결과\n");
    ptr += 1;
    printf("ptr : %p , *ptr : %c\n", ptr, *ptr);

    printf("ptr -= 2를 하고 *ptr의 결과\n");
    ptr -= 2;
    printf("ptr : %p , *ptr : %c\n", ptr, *ptr);
}