#include <stdio.h>

void DisplayTable(void); 

// 각 학생 수에 대한 영어 점수와 수학 점수를 저장해 둘 이차원 배열 grade의 선언
int grade[5][2];

void main(void)
{
    int i;

    printf("각 학생의 영어 점수와 수학 점수를 입력하세요\n");

    for(i = 0; i < 5; i++) {
        printf("$d번 학생의 영어 점수 : ", i+1);
        scanf("%d", &grade[i][0]);   // 각 학생의 영어 점수 입력
        printf("%d번 학생의 수학 점수 : ", i+1);
        scanf("%d", &grade[i][1]);   // 각 학생의 수학 점수 입력
    }

    printf("입력을 종료합니다.\n\n");

    DisplayTable();
}

