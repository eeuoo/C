#include <stdio.h>
#include <string.h>
#define LENGTH 10

/* 화폐의 종류별 매수 계산 */

struct  member
{
    char n[10];
    int p, pm[10];
};

int main()
{
    FILE *inf;

    inf = fopen("data1.txt", "r");

    struct member data;
    
    int tm[10], k, t, m, sw;

    printf("\t\t\t\t출장비 지급표\n");
    printf("성명 출잘비지급액 오만 일만 오천 오백 일백 오십 일십 오 일\n");

    for (k = 0; k <= LENGTH - 1; k++)
        tm[k] = data.pm[k] = 0;
    
    fscanf(inf, "%s %d", data.n, &data.p);

    do
    {
        t = data.p;
        m = 50000;
        sw = 1;

        for (k = 0; k <= LENGTH - 1; k++)
        {
            data.pm[k] = t / m;
            t -= data.pm[k] * m;

            if (sw == 1)
            {
                m /= 5;
                sw = 0;
            }
            else
            {
                m /= 2;
                sw = 1;
            }   
        }

        printf("%s %d", data.n, data.p);

        for (k = 0; k <= LENGTH - 1; k++)
        {
            printf("%5d", data.pm[k]);
            tm[k] += data.pm[k];
        }

        printf("\n");
        fscanf(inf, "%s %d", data.n, &data.p);

    } while (strcmp(data.n, "quit") != 0);
    
    printf("전체 화폐 매수");

    for (k = 0; k < LENGTH - 1; k++)
        printf("%5d", tm[k]);
    fclose(inf);
}