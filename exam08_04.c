#include <stdio.h>

void main(void)
{
    int data = 10;
    int *ptr;

    printf("data의 주소 : 0x%p, data의 값 : %d \n", &data, data);

    ptr = &data;

    printf("ptr의 주소 : 0x%p , ptr의 값  : %x \n", &ptr, ptr);

    printf("ptr이 가리키는 곳의 값 : %d, data의 값 : %d \n", *ptr, data);

    printf("ptr의 주소 : 0x%p , ptr의 값 : 0x%p , ptr이 가리키는 값 : %d\n", &ptr, ptr, *ptr);
}