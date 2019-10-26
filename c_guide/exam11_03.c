#include <stdio.h>
#include <string.h>

typedef struct __grade 
{
    char Name[20];
    int num;
    int Korean;

} grade;

int main()
{
    grade class_grade_1[3];
    // char buf[20];
    int i, aver = 0;

    printf("1학년의 성적 관리 프로그램입니다.\n");

    for (i = 0; i < 3; i++) {
        printf("%d째 학생의 이름을 입력하세요 : ", i + 1);
        scanf("%s", class_grade_1[i].Name);
        printf("학번을 입력하세요 : ");
        scanf("%d", &class_grade_1[i].num);
        printf("국어 성적을 입력하세요 : ");
        scanf("%d", &class_grade_1[i].Korean);
        printf("\n");
    }

    printf("\n=======================================\n");
    printf("학번\t\t이름\t\t국어 성적\n");

    for (i = 0; i < 3; i++) {
        printf("[%d]번\t\t[%s]\t\t", class_grade_1[i].num, class_grade_1[i].Name);
        printf("%d\n", class_grade_1[i].Korean);
        aver += class_grade_1[i].Korean;
    }

    printf("\n=======================================\n");
    printf("평균\t%d\n", aver / 3);

}