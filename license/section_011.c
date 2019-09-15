#include <stdio.h>

int main()
{   
    // int i, j, sw;
    // i = j = 0;
    // sw = 0;
    // do 
    // {
    //     i++;
    //     if (sw == 0)
    //     {
    //         j += i;
    //         sw = 1;
    //     }
    //     else
    //     {
    //         j -= i;
    //         sw = 0;
    //     }
        
    // } while(i < 100);

    int i = 0, j = 0;
    while (1)
    {
        i++;
        j += i;
        if(i >= 99)
        {
            printf("%d", j);
            break;
        }
        else
        {
            i++;
            j -= i;
        }
        
    }
    

    printf("%d", j);
}