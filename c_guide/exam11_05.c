#include <stdio.h>
#include <string.h>

typedef struct __grade {
    char Name[20];
    int num;
    int Korean;
} grade;

void StowTable(grade *);
int Total;

int main()
{
    grade class_grade_1[3];
    char buf[20];
    int i;
    Total = 0;

    printf("1학년의 성적 관리 프로그램입니다.\n");

    for (i = 0; i < 3; i++) {
        printf("%d번째 학생의 이름을 입력하세요 : ", i + 1);
        scanf("%s", buf);
        strcpy(class_grade_1[i].Name, buf);
        printf("학번을 입력하세요 : ");
    }
}