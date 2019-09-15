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

    // int i = 0, j = 0;
    // while (1)
    // {
    //     i++;
    //     j += i;
    //     if(i >= 99)
    //     {
    //         printf("%d", j);
    //         break;
    //     }
    //     else
    //     {
    //         i++;
    //         j -= i;
    //     }  
    // }
    
    int i;
    double j;
    i = 0;
    j = 1;
    do
    {
        i++;
        if(i % 2 == 0)
            j *= i;
        else
            j *= i * -1;
        
    } while (i < 100);
    

    printf("%11.4e", j);
}