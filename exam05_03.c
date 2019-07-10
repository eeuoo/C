#include <stdio.h>

int main()
{
    int a = 10;
    int b = 5;

    if ( (a > b) && ( a < 10) ) 
        printf(" (a > b) && (a < 10) 식은 참입니다. : %d\n", (a > b) && ( a < 10) );
    else
        printf(" (a > b) && (a < 10) 식은 거짓입니다. : %d\n", (a > b) && ( a < 10) );

    if ( (a > b) || (a < 10) ) 
        printf(" (a > b) || (a < 10) 식은 참입니다 : %d\n", (a > b) || (a < 10) );
    else 
        printf(" (a > b) || (a < 10) 식은 거짓입니다 : %d\n", (a > b) || (a < 10) );

    if ( !(a > b) )
        printf(" !(a > b) 식은 참입니다 : %d\n", !(a > b) );
    else
        printf(" !(a > b) 식은 거짓입니다 : %d\n", !(a > b) );
}