#include <stdio.h>

void print();

// 현재 행에서 출력할 '*'문자의 갯수를 저장하는 전역 변수 cnt의 선언 및 초기화
int cnt = 1;

int main()
{
    int i;
    int line;

    printf("* 모양을 사선으로 출력하는 프로그램\n");
    printf("몇 줄을 출력할까요?");
    scanf("%d", $line);  // 출력할 행 수를 사용자로부터 입력 받음

    printf("\n");

    for(i = 0; i < line; i++)
    {
        print(); // 입력 받은 행 수만큼 반복하면서 print()함수를 호출

        cnt++;
    }
}

// 1부터 cnt 변수만큼을 반복하여 '*'문자 출력하는 print()함수
void print()
{
    int i;

    for(i = 0; i < cnt; i++)
        printf(" * ");
    
    printf("\n");
}