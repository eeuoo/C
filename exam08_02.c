#include <stdio.h>

void DisplayTable(void); 

// 각 학생 수에 대한 영어 점수와 수학 점수를 저장해 둘 이차원 배열 grade의 선언
int grade[5][2];

int main(void)
{
    int i;

    printf("각 학생의 영어 점수와 수학 점수를 입력하세요\n");

    for(i = 0; i < 5; i++) {
        printf("%d번 학생의 영어 점수 : ", i+1);
        scanf("%d", &grade[i][0]);   // 각 학생의 영어 점수 입력
        printf("%d번 학생의 수학 점수 : ", i+1);
        scanf("%d", &grade[i][1]);   // 각 학생의 수학 점수 입력
    }

    printf("입력을 종료합니다.\n\n");

    DisplayTable();
}

void DisplayTable(void)
{
    int i;
    int Total[2] = {0, 0};  // 영어 점수와 수학 점수의 총점을 저장하기 위한 배열 Total의 선언과 초기화

    printf("학생 번호\t영어 점수\t수학 점수\n");

    //각 학생 별로 영어 점수와 수학 점수를 출력합니다
    for(i = 0; i < 5; i++) {
        // 각 학생에 대한 영어 점수와 수학 점수의 출력
        printf("\t%d\t\t%d\t\t%d\n", i+1, grade[i][0], grade[i][1]);
        Total[0] += grade[i][0];   // 영어 총점을 계산합니다
        Total[1] += grade[i][1];   // 수학 총점을 계산합니다
    }

    printf("=======================================\n");
    printf("총 점\t\t\t%d\t\t%d\n", Total[0], Total[i]);  // 총점 출력
    printf("평 균\t\t\t%d\t\t%d\n", Total[1] / 5, Total[1] / 5); // 평균 출력
}