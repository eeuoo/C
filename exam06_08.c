#include <stdio.h>

int main()
{
    int sum, num;
    int i;

    printf("1부터 덧셈하는 프로그램입니다. \n");
    printf("마지막 값을 입력하세요.\n");
    printf("1부터 => ");
    scanf("%d", &num);

    printf("1부터 %d까지 덧셈합니다.\n", num);

    sum = 0;
    i = 1;  // 제어변수 i의 초기화

    // for 문에서 제어변수의 초기화와 제어변수의 연산이 생략되고, 제어변수의 조건만이 남아 있습니다.
    for(; i <= num;){

        sum += i;
        printf("sum의 값 : %d\n", sum);
        i++;   // 제어변수의 연산

    }

    printf("\n 1부터 %d까지의 총합은 %d입니다.", num, sum);

    return 0;
}