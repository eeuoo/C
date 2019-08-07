#include <stdio.h>

// 다른 파일에서 선언된 Display_gugudan() 함수를 외부 함수로 선언
extern void Dispaly_gugudan(void);

// 다른 파일에서 선언된 변수 num를 외부 변수로 선언
extern int num;
int flag;

int main()
{
    flag = 0;
    printf("구구단 출력 프로그램입니다. \n");

    while (!flag)
    {
        printf("몇 단을 출력할까요? -> ");
        scanf("%d", &num);

        if(num > 1 && num < 10)
        {
            flag = 1;
            printf("%d단을 선택하셨군요.\n\n", num);
            Dispaly_gugudan();
        }
        else 
            printf("2부터 9까지만 가능합니다. 다시 입력해주세요. \n");
    }
    
    return 0;
}