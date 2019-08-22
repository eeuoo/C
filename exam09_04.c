#include <stdio.h>

int numOfString(char *);

int main()
{
    char data[50];
    int ret;

    printf("문자열을 입력하세요 : ");
    scanf("%s", data);

    ret = numOfString(data);
    printf("data의 문자열 : %s\n", data);
    printf("data의 문자 개수 : %d", ret);
}

int numOfString(char *src)
{
    int num = 0;
    // 매개변수로 받은 포인터 src를 문자열의 끝 위치까지 하나씩 이동하면서 변수 num을 1씩 증가
    while (*src++)
        num++;
    
    return num;   
}