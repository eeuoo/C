#include <stdio.h>

int main(void)
{
    int data = 10;  // 정수형 변수 data의 선언과 초기화
    int *ptr;       // 정수형 포인터 변수 ptr의 선언

    // 변수 data의 주소와 값의 출력
    printf("data의 주소 : 0x%p, data의 값 : %d \n", &data, data);

    ptr = &data;

    // 포인터 변수 ptr의 주소와 값의 출력
    printf("ptr의 주소 : 0x%p , ptr의 값  : %p \n", &ptr, ptr);

    // 포인터 ptr이 가리키는 곳의 값과 data의 값 출력
    printf("ptr이 가리키는 곳의 값 : %d, data의 값 : %d \n", *ptr, data);

    // 포인터 ptr의 주소, 값, 가리키는 값의 출력
    printf("ptr의 주소 : 0x%p , ptr의 값 : 0x%p , ptr이 가리키는 값 : %d\n", &ptr, ptr, *ptr);
}