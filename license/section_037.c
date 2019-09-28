#include <stdio.h>
#define MAX 5

/*  스택 */

int Stack[MAX];
int Top = -1;


int push(int ii) {

    Top++;

    if (Top >= MAX) 
    {
        printf("Overflow\n");
        Top--;
        return -1;
    }

    Stack[Top] = ii;
    return 0;

}

int Pop(void) {

    int r;

    if (Top < 0) {
        printf("Underflow\n");
        return -1;
    }

    r = Stack[Top];
    Top--;
    return r;
}

int main()
{
    while (1)
    {
        int i = 0, j, k;
        printf("작업을 선택하세요. : ");
        scanf("%d", &j);

        if (j == 1) 
        {
            printf("삽입할 숫자를 입력하세요. : ");
            scanf("%d", &k);

            i = push(k);

            if (i == -1 )break;
        }
        else if (j ==  2)
        {
            i = Pop();
            
            if (i == -1 ) break;
            else 
                printf("제거한 자료는 %d입니다.\n", i);
        }
        else break;

        if (Top < 0)
            printf("스택에 자료가 없습니다.\n");
        else
        {
            printf("스택의 자료는 다음과 같습니다.\n");
            for (int i = Top; i >= 0; i--)
                printf("%10d\n", Stack[i]);
        }
    }
    
}