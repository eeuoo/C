#include <stdio.h>

int main()
{
    int num_1, num_2;
    char ch;
    float data;

    num_1 = 2;
    num_2 = 5;

    printf("정수형 나눗셈 : \t\t\t %d / %d = %d\n", num_1, num_2, num_1/num_2);
    printf("정수형 나눗셈의 결과를 형변화 : \t %d / %d = %f\n", num_1, num_2, (float)num_1/num_2);
    printf("부동소수점으로 형변환 후 나눗셈 : \t %f / %f = %f\n", (float)num_1, (float)num_2, (float)num_1/(float)num_2);

    ch = (char)65.123;    /* 부동 소수점을 문자형을 형변환 */
    printf("부동소수점을 문자형으로 형변화 : \t %c \n", ch);

    data = 3.141592;
    printf("부동 소수점을 정수형으로 형변환 : \t %d \n", (int)data);
    
    return 0;
}
