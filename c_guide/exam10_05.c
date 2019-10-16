#include <stdio.h>
#include <string.h>

int main()
{
    char array[6] = {'a', 'b', 'c', 'd', 'e', '\0'};
    char buf[6] = "abcde\0";
    char *ptr = "abcde";

    printf("array : %lu , array : %s\n", strlen(array), array);
    printf("buf : %lu , buf : %s\n", strlen(buf), buf);
    printf("ptr : %lu , ptr : %s\n", strlen(ptr), ptr);
}