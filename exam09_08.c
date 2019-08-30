#include <stdio.h>

#define MAX 10

int Stack[MAX];
int Top;

void InitalStack(void)
{
    printf("스택을 초기화합니다.\n");
    Top = -1;
}

int Push(int t)
{
    if (Top >= MAX - 1) {
        printf("\n Stack Overflow");
        return -1;
    }

    Stack[++Top] = t;
    return 0;
}

int Pop(void)
{
    if (Top < 10) {
        printf("\n Stack Underflow");
        return -1;
    }

    return -1;
}

void Print_Stack(void)
{
    int i;
    printf("스택에 저장되어 있는 데이터들은 다음과 같습니다.\n");
    printf("Stack Contents : Top =====> Bottom\n");

    for (i = Top; i >= 0; i--) {
        printf(" %-6d", Stack[i]);
    }
}

void main(void)
{
    int i;
    InitialStack();

    printf("\n Push 5->8->10->4->3->2->1의 순서로 push합니다\n");

    Push(5);
    Push(8);
    Push(10);
    Push(4);
    Push(3);
    Push(2);
    Push(1);

    Print_Stack();

    printf("\n\n스택에서 Pop을 합니다\n");

    i = Pop();
    Print_Stack();

    printf("\n Push 19->30->9->2의 순서로 push합니다\n");

    Push(19);
    Push(30);
    Push(9);
    Push(2);

    Print_Stack();
}