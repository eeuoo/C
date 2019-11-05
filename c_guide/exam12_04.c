#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fin, *fout = NULL;
    char buf[80];
    char ptrline_num[3];
    int line_num = 1;

    if (argc < 3) {
        printf("다음 형식으로 입력하세요 ! :  exam12_04 원본_파일 복사_파일");
        return -1;
    }

    if ( (fin = fopen(argv[1],  "r")) == NULL ) {
        printf("원본 파일을 열 수 없습니다.");
        return -1;
    }

    if ( (fin = fopen(argv[2],  "W")) == NULL ) {
        printf("복사 파일을 열 수 없습니다.");
        return -1;
    }

    while (!feof(fin))
    {
        fgets(buf, 80, fin);
        sprintf(ptrline_num, "%2d", line_num++);
        fputs(ptrline_num, fout);
        fputs(buf, fout);
    }

    
}