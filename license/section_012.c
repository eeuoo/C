#include <stdio.h>

int main()
{
    float i = 0, j = 0;
    do
    {
        i++;
        if ((int)(i / 2) == i / 2)
            j += i / (i + 1);
        else
            j -= i / (i + 1);
        
    } while (i < 99);
    
    printf("%f", j);
}