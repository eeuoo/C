#include <stdio.h>

int main()
{
    int score;

    printf("학점 산출 프러그램입니다. 국어 점수를 입력하세요.\n");
    printf("국어 점수 : ");
    scanf("%d", &score);
    printf("\n");

    if (score > 90){
        printf("A학점입니다.\n");
        printf("최고입니다!");
    }
    else if (score > 80) {
        printf("B학점입니다.\n");
        printf("조금만 더 노력해 보세요!");
    }
    else if (score > 70) {
        printf("C학점입니다.\n");
        printf("딱 중간입니다!");
    }
    else if (score > 60) {
        printf("D학점입니다.\n");
        printf("낙제 직전입니다!");
    }
    else {
        printf("F학점입니다.\n");
        printf("분발하세요!");
    }

    return 0;
}