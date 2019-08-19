#include <stdio.h>

#define MAX 1000
int main()
{
    int buf[MAX];  // 정수형 데이터를 MAX개 갖는 배열 buf의 선언

    int i, size;

    printf("배열을 이용한 Matrix의 출력 \n");
    printf("Matrix의 크기를 입력하세요 : ");

    scanf("%d", &size);  // Matrix의 크기 입력

    printf("\n");

    // size X size의 크기를 갖는 matrix에 숫자 대입
    for(i = 0; i < size*size; i++)
        buf[i] = i+1;

    // size X size의 크기를 갖는 matrix의 출력
    for(i = 1; i < size*size; i++)
    {
        printf("%4d", buf[i-1]);
        if(i%size == 0) // 현재의 제어변수 i를 size로 나누어서 나머지가 0이면 줄바꿈 실행
            printf("\n");
    }
}