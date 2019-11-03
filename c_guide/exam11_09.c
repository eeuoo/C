#include <stdio.h>
#include <string.h>

typedef struct _Lang {
    int Kor;
    int Eng;
} Lang;

typedef struct _Student {
    char name[20];
    Lang Language;
    int Society;
    int Music;
    int Sum;
    float Average;
} Students;

int main()
{
    Students Persons[2];
    
    strcpy(Persons[0].name, "반 점수");
    Persons[0].Language.Kor = 90;
    Persons[0].Language.Eng = 95;
    Persons[0].Society = 88;
    Persons[0].Music = 80;
    Persons[0].Sum = Persons[0].Language.Kor + Persons[0].Language.Eng + Persons[0].Society + Persons[0].Music;
    Persons[0].Average = Persons[0].Sum / (float)4;

    printf("본인의 이름을 적으세요 : ");
    scanf("%s", Persons[1].name);
    printf("본인의 국어점수을 적으세요 : ");
    scanf("%d", &Persons[1].Language.Kor);
    printf("본인의 영어점수을 적으세요 : ");
    scanf("%d", &Persons[1].Language.Eng);
    printf("본인의 사회점수을 적으세요 : ");
    scanf("%d", &Persons[1].Society);
    printf("본인의 음악점수을 적으세요 : ");
    scanf("%d", &Persons[1].Music);

    Persons[1].Sum = Persons[1].Language.Kor + Persons[1].Language.Eng +  Persons[1].Society +  Persons[1].Music;
    Persons[1].Average =  Persons[1].Sum / (float)4;

    if (Persons[0].Sum < Persons[1].Sum)
        printf("[%s]은 반 평균 점수보다 과목 총점으로는 %d점, 과목 평균 점수로는 %f점 높습니다.\n",  Persons[1].name,  Persons[1].Sum -  Persons[0].Sum,  Persons[1].Average -  Persons[0].Average);
    else if (Persons[0].Sum > Persons[1].Sum)
        printf("[%s]은 반 평균 점수보다 과목 총점으로는 %d점, 과목 평균 점수로는 %f점 낮습니다.\n",  Persons[1].name,  Persons[0].Sum -  Persons[1].Sum,  Persons[0].Average -  Persons[1].Average);
    else
        printf("반평균과 똑같습니다.\n");
}