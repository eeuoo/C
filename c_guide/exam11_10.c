#include <stdio.h>
#include <stdlib.h>

// 구조체 Data의 정의
typedef struct _DATA
{
    int index;
    int front;
    int back;
    int number;
} DATA;

int main()
{
    DATA* datum;
    int i, j;
    int height;

    printf("출력될 삼각형의 높이를 입력하시요 : ");
    scanf("%d", &height);

    datum = (DATA*)malloc(sizeof(DATA)*height);

    for(i = 0; i < height; i++)
    {
        datum[i].index = i;
        datum[i].front = height;
        datum[i].back = height - i;
        datum[i].number = (2*i) + 1;
    }

    for(i = 0; i < height; i++)
    {
        for(j = 0; j < datum[i].front; j++) printf(" ");
        for(j = 0; j < datum[i].number; j++) printf("*");
        for(j = 0; j < datum[i].back; j++) printf(" ");
        printf("\n");
    }

    free(datum);
}
