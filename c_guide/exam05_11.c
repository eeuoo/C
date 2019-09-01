#include <stdio.h>

int main()
{
    int n, result;
    int i, value_new, value1, value2;

    printf("피보나치 수열을 구해봅시다 \n");
    printf("몇 개를 구해볼까요?");
    scanf("%d", &n);

    i = 0; 
    value1 = value2 = 1;
    printf("%4d", value1);
    printf("%4d", value2);

    while (i <= n)
    {
        value_new = value1 + value2;   // 이전의 두 값을 덧셈하여 새로운 값을 생성
        printf("%4d", value_new);
        value2 = value1;               // 이전의 첫 번째 값을 두 번째 값에 대입
        value1 = value_new;            // 새로 구한 값을 첫 번째 값에 대입
        i++;
    }

    printf("\n");
    return 0;
    
}