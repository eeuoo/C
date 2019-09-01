#include <stdio.h>

#define MAX 100

int main()
{
    int buf[MAX][MAX];   // 정수형 데이터를 갖는 이차원 배열 buf의 선언

    int i, j, k = 1;
    int size;

    printf(" 출력할 행의 수를 입력하세요 : ");
    scanf("%d", &size);

    printf("\n");

    // 초기화 과정, 0으로 채움
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
            buf[i][j] = 0;
    }

    // 사용되는 배열 구성에 1부터 정수를 입력함.
    for(i = 0; i < size; i++)
    {
        for(j = size - i - 1; j < size; j++)
            buf[i][j] = k++;
    }

    // 이차원 배열 buf의 값이 0이면 공백문자 출력, 0이 아니면 정수값 출력
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            if(buf[i][j] == 0)
                printf(" ");
            else
                printf("%4d", buf[i][j]);
        }
        printf("\n");
    }
}