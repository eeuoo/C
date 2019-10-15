#include <stdio.h>
#include <string.h>

int main()
{
    char array[5] = {'a', 'b', 'c', 'd', 'e'};
    char buf[5] = 'abcde';
    char *ptr = 'abcde';

    printf("array : %d, array : %s\n", strlen(array), array);
    printf("buf : %d, buf : %s\n", strlen(buf), buf);
    printf("ptr : %d, ptr : %s\n", strlen(ptr), prt);
}
