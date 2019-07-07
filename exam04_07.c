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

    
}