#include <stdio.h>

void IncreaseAge(int);

static int age;  // 정적 변수 age의 선언

int main()
{
    int i;
    age = 33;  // 정적 변수 age의 초기화

    printf("여기는 main() 함수입니다.\n");
    printf(" age : %d\n\n", age);

    for (i = 0; i < 5; i++)
        IncreaseAge(10);

    printf("\n여기는 main() 함수입니다.\n");
    printf(" age : %d\n", age);

    return 0;
    
}

void IncreaseAge(int num) 
{
    //static int age = 25;  // IncreaseAge() 함수 내에서 정적 변수 age의 초기화

    age = age + num;

    printf("여기는 IncreaseAge() 함수의 내부입니다.\n");
    printf(" age : %d\n", age);
}