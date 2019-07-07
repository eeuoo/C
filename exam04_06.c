#include <stdio.h>

int main()
{
    int data;
    int i;

    printf("약수를 구할 정숫값을 입력하세요\n");
    printf(" 입력  : ");
    scanf("%d", &data);  // 약수를 구할 수를 입력 받음

    // for 문을 실행하여 약수를 구함
    for(i = 1 ; i <= data; i++) {
        if( (data % i ) == 0 )   // 사용자가 입력한 수가 변수로 i로 나뉘어지는지 검사
            printf("%4d", i);    // 사용자가 입력한 수가 변수로 i로 나뉘어지면 그 값을 출력
    }

    return 0;
}