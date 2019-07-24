#include <stdio.h>

int main()
{
    int sum, num;
    int i;

    printf("1부터 덧셈하는 프로그램입니다.\n");
    printf("마지막 값을 입력하세요.\n");
    printf("1부터 => ");
    scanf("%d", &num);   // 사용자에게서 1부터 덧셈을 할 수 입력 받습니다.
    printf("1부터 %d까지 덧셈합니다.\n", num);

    sum = 0;  // 총합을 저장할 변수 sum을 0으로 초기화합니다.

    // 제어변수 i를 1부터 num까지 반복하여 sum에 덧셈을 합니다.
    for (i = 1; i <= num; i++)
        sum += i;

    printf("\n1부터 %d까지의 총합은 %d입니다.", num, sum);

    return 0;
}