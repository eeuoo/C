#include <stdio.h>

int main(void)
{
    int data = 10;
    int *ptr;

    printf("data의 주소 : 0x%p, data의 값 : %d \n", &data, data);

    ptr = &data;

    printf("ptr의 주소 : 0x%p, ptr의 값       : %p \n", &ptr, ptr);
}