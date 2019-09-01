#include <stdio.h>

int Exponential(int, int);

int main()
{
    int ret;

    printf("지승 값을 구해봅시다\n");
    printf("2의 3승은 얼마일까요?\n");

    ret = Exponential(2, 3);

    printf("2의 3승은 %d이군요.\n", ret);

    printf("\n");
    printf("3의 6승은 얼마일까요?\n");

    ret = Exponential(3, 6);

    printf("3의 6승은 %d이군요.\n", ret);
}

//Exponential() 함수 선언
int Exponential(int num, int range)
{
    int ret = num;

    if(range > 1){
        ret = num * Exponential(num, range - 1);  //Exponential() 함수 호출

        return ret;
    }

    return ret;
}