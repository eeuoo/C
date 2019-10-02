#include <stdio.h>

/* 동별, 나이별 인원 통계 */

struct member
{
    int dong, nai;
    char irum[10];
};


int main()
{
    FILE *ouf;

    ouf = fopen("result3.txt", "w");

    struct member data;
    int a[11][8], i, j, row, col;

    for (i = 0; i <= 10; i++)
    {
        for (j = 0; j <= 7; j++)
            a[i][j] = 0;
    }

    printf("동 이름 나이를 입력하세요.\n모두 입력하셨으면 '0 0 0'을 입력하세요\n");

    while (1)
    {
        scanf("%d %s %d", &data.dong, data.irum, &data.nai);

        if (data.dong == 0)
            break;
        
        if (data.nai >= 60)
            data.nai = 60;
        
        row = data.dong - 1;
        col = data.nai / 10;

        a[row][col] += 1;
        a[row][7] += 1;
        a[10][col] += 1;
        a[10][7] += 1;

        for (i = 0; i <= 10; i++)
        {
            for (j = 0; j <= 7; j++)
                fprintf(ouf, " %d", a[i][j]);
            
            fprintf(ouf, "\n");
        }

        fclose(ouf);
    }
    
}