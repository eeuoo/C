#include <stdio.h>
#include <string.h>

/* 학급별 최대, 최소 체중 */

struct member
{
    char ban[4];
    int bunho, wgt;
};


int main()
{
    struct member data[100];

    int flag, a, b, i, k;
    char c[4];

    printf("반 번호 무게를 입력하세요.\n 모두 입력하셨으면 '0 0 0'을 입력하세요.\n");

    flag = 0;
    i = k = -1;

    do {
        k++;
        scanf("%s %d %d", data[k].ban, &data[k].bunho, &data[k].wgt);
    } while (data[k].bunho != 0);
    
    printf("반\t번호\t체중\n");

    while (i < k - 1)
    {
        i++;
        
        if (flag == 0)
        {
            flag = 1;
            a = data[i].wgt;
            b = data[i].wgt;
        }
        else if (a > data[i].wgt)
            a = data[i].wgt;
        
        else if (b < data[i].wgt)
            b = data[i].wgt;

        if (strcmp(c, data[i].ban) == 0)
        {
            printf("   \t%d\t%d\n", data[i].bunho, data[i].bunho);
            continue;
        }

        strcpy(c, data[i].ban);
        printf("%s\t%d\t%d\n", data[i].ban, data[i].bunho, data[i].wgt);
    }
    
    printf("최소 체중 : %d\n", a);
    printf("최대 체중 : %d", b);

}