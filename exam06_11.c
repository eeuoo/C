#include <stdio.h>

int main()
{
    char ch;

    printf("아무 키나 눌러주세요. q를 누르면 종료합니다.\n");

    do
    {
        scanf("%c", &ch);
    } while (ch !=  'q');
    
    printf("프로그램을 종료합니다.");

    return 0;
}