#include <stdio.h>
#include <mm_malloc.h>

void addr(int);

int main()
{
    int num;

    printf("크기를 입력하시오 : ");
    scanf("%d", &num);  // 사용할 배열의 크기를 사용자로부터 입력 받음

    addr(num);
}

void addr(int x)
{
    char *ptr;

    int i = 0, sum = 0;

    // 주어진 매개변수 x만큼 malloc()함수를 사용하여 메모리 할당
    ptr = (char*)malloc(sizeof(char)*x);
    printf("\n할당된 메모리에 들어갈 값을 입력하시오\n");

    // 반복문을 실행하면서 배열 ptr에 값 일겨
    while(i < x) {
        printf("ptr[%d] => ", i);
        scanf("%s", &ptr[i]);
        i++;
    }

    // 입력한 값을 덧셈함
    for(i = 0; i < x; i++)
        sum = sum + ptr[i];

    // 포인터 ptr의 첫 번째 항목의 주소와 마지막 항목의 주소를 출력
    printf("\n0x%s에서 0x%s까지 저장된 값들의 합은 %d 이다.", ptr, ptr+x, sum);
    free(ptr);
}