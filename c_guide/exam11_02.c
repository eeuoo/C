#include <stdio.h>
#include <string.h>

struct grade
{
    char Name[20];
    int num;
    int Korean;
    int English;
    int Math;
};

int main()
{
    struct grade class_grade_1;
    
    strcpy(class_grade_1.Name, "유재숙");
    class_grade_1.num = 15;
    class_grade_1.Korean = 90;
    class_grade_1.English = 100;
    class_grade_1.Math = 95;

    // 구조체 grade에 저장된 값을 출력
    printf("[%d]번 [%s]의 성적표입니다.\n", class_grade_1.num, class_grade_1.Name);

    printf("국어 : %d\n", class_grade_1.Korean);
    printf("영어 : %d\n", class_grade_1.English);
    printf("수학 : %d\n", class_grade_1.Math);
    
}
