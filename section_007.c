#include <stdio.h>

struct sawon
{
    char name[10];
    char jikwi[10];
    int pay;
};

struct sawon data;

int main()
{
    // int a = 20;
    // int *b;
    // b = &a;
    // *b = *b + 10;
    // printf("%d %p %d\n", a, b, *b);

    // int a[5];
    // int i;
    // for(i = 0; i < 5; i++)
    //     a[i] = i + 10;

    // for(i = 0; i < 5; i++)
    //     printf("%d", a[i]);

    // int a[5];
    // int i;
    // int *p;
    // for(i = 0; i < 5; i++)
    //     a[i] = i + 10;
    // p = a;
    // for(i = 0; i < 5; i++)
    //     printf("%d", *(p+i));

    // int a[3][4];
    // int i, j, k = 0;
    // for(i = 0; i < 3; i++)
    // {
    //     for(j = 0; j < 4; j++)
    //     {
    //         k++;
    //         a[i][j] = k;
    //     }
    // }

    printf("이름 : ");
    scanf("%s", data.name);
    printf("직위 : ");
    scanf("%s", data.jikwi);
    printf("급여 : ");
    scanf("%d", &data.pay);
    
    printf("\n\n");

    printf("이름 : %s\n", data.name);
    printf("직위 : %s\n", data.jikwi);
    printf("급여 : %d\n", data.pay);
}