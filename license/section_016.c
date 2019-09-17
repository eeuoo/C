#include <stdio.h>
#include <math.h>

int main()
{
    // int a, i, j;
    // scanf("%d", &a);
    // i = a - 1;
    // j = 2;
    // while (1)
    // {
    //     if(j <= i)
    //     {
    //         if (a % j == 0)
    //         {
    //             printf("소수 아님");
    //             break;
    //         }
    //         else
    //             j++;
            
    //     }
    //     else
    //     {
    //         printf("소수");
    //         break;
    //     }
    // }

    // int a, j;
    // scanf("%d", &a);
    // j = 2;
    // while (a % j != 0)
    //     j++;
    // if (a == j)
    //     printf("소수");
    // else
    //     printf("소수 아님");

    int a, j;
    scanf("%d", &a);
    j = 2;
    while (1)
    {
        if(j <= sqrt(a))
        {
            if(a % j == 0)
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