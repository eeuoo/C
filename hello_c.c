#include <stdio.h>
#define MAX 10

int addNumber(int, int);    // addNumber() 함수의 프로토타입

int main(void)   // 시작함수
{

// 변수 선언
int a, num b;
int result ; 

// 변수 초기화
a = 10 ;
b = 20 ;

printf('a + b = ');
result = a + b;   // 덧셈연산자를 이용한 변수 연산

printf('a + b = : %d\n', result);

// addNumber() 함수의 호출
result = addNumber(a, b);
printf(" addNumber(a, b) : %d\n", result);
return 0;
}

int addNumber(int a, int b)
{
// addNumber() 함수의 몸체
int ret;
ret = a + b;
return ret;
}