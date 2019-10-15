#include <stdio.h>
#include <string.h>

int main()
{
    char array[5] = {'a', 'b', 'c', 'd', 'e'};
    char buf[5] = "abcde";
    char *ptr = "abcde";

    printf("array : %lu, array : %s\n", strlen(array), array);
    printf("buf : %lu, buf : %s\n", strlen(buf), buf);
    printf("ptr : %lu, ptr : %s\n", strlen(ptr), ptr);
}
