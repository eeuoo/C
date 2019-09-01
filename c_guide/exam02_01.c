#include <stdio.h>

int main()
{
char name[30];    // scanf()함수로 문자열을 입력받기 위해 배열 name을 선언함
int num_10, num_8, num_16;
float num_float1;

printf("scanf() 함수의 기능에 대해 알아볼까요?\n");
printf("문자열 입력을 받습니다 : ");
// scanf() 함수를 이용한 문자열의 입력. %s를 사용함. 문자열의 경우에는 &를 사용하지 않는다.
scanf("%s", name);

printf("10진수 입력을 받습니다 : ");
// scanf() 함수를 사용한 10진수 정수형의 입력. 단, 변수의 이름 앞에 &를 붙여준다.
scanf("%d", &num_10);

printf("8진수 입력을 받습니다 : ");
// scanf() 함수를 사용한 8진수 정수형의 입력. 단, 변수의 이름 앞에 &를 붙여준다.
scanf("%o", &num_8);

printf("16진수 입력을 받습니다 : ");
// scanf() 함수를 사용한 16진수 정수형의 입력. 단, 변수의 이름 앞에 &를 붙여준다.
scanf("%x", &num_16);

printf("실수 입력을 받습니다 : ");
// scanf() 함수를 사용한 부동 소수점의 입력. 단, 변수의 이름 앞에 &를 붙여준다.
scanf("%f", &num_float1);

printf("\n");
printf("어떤 값들을 입력받았는지 출력해볼까요?\n");
printf("\n");

printf("\n", name);

printf("10진수 : [%d], 8진수 : [%o], 16진수 : [%x]\n", num_10, num_10, num_10);
printf("10진수 : [%d], 8진수 : [%o], 16진수 : [%x]\n", num_8, num_8, num_8);
printf("10진수 : [%d], 8진수 : [%o], 16진수 : [%x]\n", num_16, num_16, num_16);
printf("실수 : %10.2g\n", num_float1);

}