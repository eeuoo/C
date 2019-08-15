#include <stdio.h>
#include <string.h>

void PrintUpper(char);

int main()
{
    int i;
    int num;

    char *buf = "i am a super woman";   // 문자형 포인터 buf를 선언하고 초기화
    // 문자형 포인터의 경우에는 이처럼 선언과 동시에 값을 초기화할 수 있습니다
    printf("포인터의 활용 예제 - 첫 번째 \n");

    num = strlen(buf);          // strlen() 함수를 이용하여 buf 변수에 저장된 문자열의 길이를 저장
    for(i = 0; i < num; i++)    // num 변수의 크기(12)만큼 i값을 증가
        PrintUpper(*buf++);     // bur 변수의 주소 위치를 하나씩 증가시키며 해당 위치에 저장된 문자 출력
}

void PrintUpper(char data) {
    printf("%c", data -('a'-'A'));  // 매개변수 data를 대문자로 변환하여 출력
}