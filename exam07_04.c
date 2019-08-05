#include <stdio.h>

void Display_gugudan(void);

int num //  전역 변수 num의 선언

int flag; // 전역 변수 flag의 선언

int main()
{
    flag = 0;
    printf("구구단 출력 프로그램입니다.\n");

    while(!flag){
        printf("몇 단을 출력할까요?");
        scanf("%d", &num);   // 전역 변수 num에 사용자의 입력값을 저장

        if (num > 1 && num < 10){
            flag = 1;
            printf("%d단을 선택하셨군요.\n\n", num);
            Display_gugudan();
        }
        else
        {
            printf("2부터 9까지만 가능합니다. 다시 입력해주세요.\n", num);
        }
                
    }

    return 0;

}

void Display_gugudan(void){
    int i;
    for( i = 1; i < 10; i++){
        printf("%d X %d = %d\n", num, i, (num * i));
    }
}