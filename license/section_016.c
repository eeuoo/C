#include <stdio.h>

int main()
{
    int a, i, j;
    scanf("%d", &a);
    i = a - 1;
    j = 2;
    while (1)
    {
        if(j <= i)
        {
            if (a % j == 0)
            {
                printf("소수 아님");
                break;
            }
            else
                j++;
            
        }
        else
        {
            printf("소수");
            break;
        }
    }
    
}