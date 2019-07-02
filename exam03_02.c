#include <stdio.h>

int main()
{
    int person[3];  // 각 학생들의 국어 성적을 저장할 배열
    int i;
    int total_Korean = 0;
    int avr_Korean = 0;

    printf("학급의 국어 성적에 대한 총점과 평균 구하기\n");

    person[0] = 95;
    person[1] = 80;
    person[2] = 92;

    // 학생들의 국어 성적 출력
    for(i = 0; i < 3; i++)
        printf("%d번째 학생의 국어 성적 : %d\n", i+1, person[i]);

    // 학생들의 국어 성적 총합
    for (i = 0; i < 3; i++)
        total_Korean += person[i];

    // 학생들의 국어 성적 평균
    avr_Korean = total_Korean / 3;
    printf("\n");
    prinf("이 학급의 국어 총점 : $d\n", total_Korean);
    prinf("이 학급의 국어 평균 %d\n", avr_Korean);
    return 0;
}