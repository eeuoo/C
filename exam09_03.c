#include <stdio.h>
#include <malloc.h>

char *AddString(char *, char *);  // AddStringd() 함수의 프로토타입 선언

int main()
{
    char data_1[80] = 'Im a super woman ';
    char data_2[80] = 'Who are you?';
    char *ret;  // AddString() 함수의 결과를 저장할 포인터 ret의 선언

    printf("AddString() 함수를 호출하기 전\n");
    printf("data_1의문자열 : %s\n", data_1);
    printf("data_2의문자열 : %s\n", data_2);

    ret = AddString(data_1, data_2);

    printf("\nAddString()함수를 호출한 후\n");
    printf("data_1의 문자열 : %s\n", data_1);
    printf("data_2의 문자열 : %s\n", data_2);
    printf("ret의 문자열 : %s\n", ret);

}

char *AddString(char *src1, char *src2);   // 포인터 변수 src1과 src2를 선언
{
    char *ret, *ptr;
    // 포인터 변수 src1의 크기와 src2의 크기만큼의 메모리를 할당 받아 포인터 ptr에 연결
    ptr = (char *)malloc(sizeof(src1) + sizeof(src2) + 2);  

    ret = ptr;

    whlie(*src1)
        *ptr++ = *src1++;  // src1의 처음부터 끝부분까지의 데이터를 ptr이 가리키는 주소 위치로 차례차례 복사
    
    while(*src2)
        *ptr++ = *src2++; // src2의 처음부터 끝부분까지의 데이터를 ptr이 가리키는 주소 위치로 차례차례 복사

    *ptr = '\0';
    
    return ret;
}