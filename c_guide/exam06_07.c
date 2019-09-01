#include <stdio.h>

int main()
{
    int sum, num;
    int i, j;

    printf("1부터 덧셈하는 프로그램입니다. \n");
    printf("마지막 값을 입력하세요.\n");
    printf("1부터 => ");
    scanf("%d", &num);

    printf("1부터 %d까지 덧셈합니다.\n", num);

    sum = 0;

    // 또 다른 변수 j를 0으로 초기화하고, j도 i와 마찬가지로 반복될 때마다 1씩 증가한다.
    for ( i = 1, j = 0; i <= num; i++, j++ ){
        sum += i;
        printf("[%d행] sum의 값 : %d\n", j, sum);
    }

    printf("\n1부터 %d까지의 총합은 %d입니다.", num, sum);

    return 0;
}