#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void StringCopy(char *, char *);

// int main()
// {
//     char *ptr1 == "abcde" ;
//     char *ptr2;

//     printf("StringCopy() 함수 호출 전\n");
//     printf("ptr1 : %s\n", ptr1);

//     StringCopy(ptr2, ptr1);

//     printf("StringCopy() 함수 호출\n");
//     printf("ptr1 : %s\n", ptr1);
//     printf("ptr2 : %s\n", ptr2);
// }

// void StringCopy(char *dst, char *src)
// {
//     while (*src)
//     {
//         *dst++ = *src++;
//     }
// }

int main()
{
    char *ptr1 = "abcde";
    char *ptr2 = (char *)malloc(strlen(ptr1) + 1);

    printf("StringCopy() 함수 호출 전\n");
    printf("ptr1 : %s\n", ptr1);

    StringCopy(ptr2, ptr1);

    printf("StringCopy() 함수 호출 후\n");
    printf("ptr1 : %s\n", ptr1);
    printf("ptr2 : %s\n", ptr2);
}

void StringCopy(char *dst, char *src) 
{
    while(*src)
        *dst++ = *src++;
    *dst = '\0';
}