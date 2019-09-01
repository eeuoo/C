#include <stdint.h>

int main()
{
    int data1, data2;
    int i, num;

    printf("약수를 구할 두 정숫값을 입력하세요\n");
    printf(" 입력1 : ");
    scanf("%d", &data1);  // 첫 번째 정숫값 입력을 받음

    printf(" 입력2 : ");
    scanf("%d", &data2);  // 두 번째 정숫값 입력을 받음


    // data1과 data2 중에서 더 큰 수를 변수 num에 저장

    if (data1 > data2)
        num = data1;
    else
        num = data2;

    for(i = 1; i <= num; i++){     // 1부터 num까지 반복 수행

    /* data1을 변수 i로 나눈 값이 0이고, data2를 변수 i로 나눈 값도 0인 경우 공통 약수로 출력 */
        if ( ((data1 % i) == 0) && ((data2 % i) == 0))
            printf("%4d", i);

    /* 변수 i가 data1이나 data2와 같아지면 반복문의 수행을 중단함 */
        if ( (i == data1) || (i == data2))
            break;
    }

    return 0;
}