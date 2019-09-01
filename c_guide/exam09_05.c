#include <stdio.h>

char * TrimString(char *);
int main()
{
    char data[80] = '##I am a super woman. Who are you ?';
    char *ret;

    printf("data의 문자열 : %s\n", data);
    ret = TrimString(data);

    printf("ret의 문자열 : %s\n", ret);
}

char *TrimString(char *src)
{
    char *ret, *ptr;
    ret = src;
    ptr = src;

    while (*src)
    {
        if((*src >= 'A' && *src <= 'Z') || (*src >= 'a' && *src <= 'z')) {
            *ptr++ = *src++;
        } else {
            src++;
        }
    }
    
    *ptr = '\0';

    return ret;
}