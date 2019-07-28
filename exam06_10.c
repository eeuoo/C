#include <stdio.h>

int main()
{
    int i, num;

    printf("구구단 출력 프로그램입니다. \n");
    printf("출력할 단을 입력하세요 : ");

    scanf("%d", &num);

    i = 1;
    while ( i < 10)
    {
        printf("%d X %d = %d \n", num, i, num * i);
        i++;
    }
    
    return 0;
}