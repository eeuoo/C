#include <stdio.h>
#include <string.h>

typedef struct __grade {
    char Name[20];
    int num;
    int korean;
} grade;

void ShowTable(grade);
int Total;

int main()
{
    grade class_grade_1[3];
    char buf[20];
    int i;
    Total  = 0;

    printf("1학년의 성적 관리 프로그램입니다.\n");

    for (i = 0; i < 3; i++) {
        printf("%d번째 학생의 이름을 입력하세요 : ", i+1);
        scanf("%s", class_grade_1[i].Name);
        printf("학번을 입력하세요 : ");
        scanf("%d", &class_grade_1[i].num);
        printf("국어 성적을 입력하세요 : ");
        scanf("%d", &class_grade_1[i].korean);
        printf("\n");
    }

    printf("\n=================================\n");
    printf("학번\t\t이름\t\t국어 성적\n");

    for (i = 0; i < 3; i++) 
        ShowTable(class_grade_1[i]);

    printf("\n=================================\n");
    printf("평균\t%d\n", Total / 3);
}

void ShowTable(grade tbl) 
{
    printf(" [%d]번\t\t[%s]\t", tbl.num, tbl.Name);
    printf(" %d\n", tbl.korean);
    Total += tbl.Korean;
}

