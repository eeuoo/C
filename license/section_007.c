#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

struct sawon
{
    char name[10];
    char jikwi[10];
    int pay;
};

struct sawon data;

// void func(int i, int j);
// int func(int i, int j);
// void func(int *i, int *j);
// int factorial(int n);

int add(int i, int j) {
    return i + j;
}

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

    // printf("이름 : ");
    // scanf("%s", data.name);
    // printf("직위 : ");
    // scanf("%s", data.jikwi);
    // printf("급여 : ");
    // scanf("%d", &data.pay);
    
    // printf("\n\n");

    // printf("이름 : %s\n", data.name);
    // printf("직위 : %s\n", data.jikwi);
    // printf("급여 : %d\n", data.pay);

    // int a = 3, b = 12;
    // func(a, b);
    // printf("%d, %d\n", a, b);

    // int a = 3, b = 12;
    // func(&a, &b);
    // printf("%d, %d\n", a, b);

    // printf("%d", factorial(5));

    // int i = 10, j = 5, result;
    // int (*pf)(int, int);
    // pf = add;
    // result = pf(i, j);
    // printf("%d", result);

    // printf("%f\n", pow(2, 3));
    // printf("%f\n", sqrt(25));
    // printf("%d\n", abs(-20));
    // char a[] = "ad";
    // char b[] = "ac";
    // printf("%d\n", strcmp(a, b));
    // strcpy(a, b);
    // printf("%d\n", strcmp(a, b));
    // char c[] = "123";
    // char d[] = "456";
    // printf("%f\n", atof(c) + atof(d));
    // char e[] = "12.3";
    // char f[] = "45.6";
    // printf("%f\n", atof(e) + atof(f));

    int n = 0;
    srand(time(NULL));
    while (n != 1)
    {
        n = rand() % 6 + 1;
        printf("%d\n", n);
    }
    
}

// void func(i,j)
// int func(i, j)

// int *i, *j;
// {
//     *i *= 3;
//     *j /= 3;
//     printf("%d, %d\n", *i, *j);
//     // return i;
// }

// int factorial(int n) {
//     if (n <= 1)
//         return 1;
//     else
//         return n * factorial(n-1);
// }