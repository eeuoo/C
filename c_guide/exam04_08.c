#include <stdio.h>

int main()
{
    int data1, data2;
    int i, num, max;

    printf("약수를 구할 두 정숫값을 입력하세요\n");
    printf(" 입력1 : ");
    scanf("%d", &data1);
    printf(" 입력2 : ");
    scanf("%d", &data2);

    if (data1 > data2)
        num = data2;
    else
        num = data1;

    for(i = 1; i <= num; i++){
        if( ((data1 % i) == 0) && ((data2 % i) == 0) ) 
            max = i;    // 현재 공약수를 변수 max에 저장
    }

    /* 가장 최근에 max에 저장된 공약수를 출력 */
    printf("%d와 %d의 최대공약수는 %d입니다", data1, data2, max);

    return 0;
}