#include <stdio.h>

int main(int argc, char* argv[])
{
    FILE *fin1, *fin2, *fout;
    char src1[80], src2[80];

    if (argc < 4) {
        printf("사용법  : exam12_07.exe 파일_1 파일_2 파일_3\n");
        printf("이 프로그램은 파일_1과 파일_2를 합쳐서 파일_3에 저장합니다.\n");
        
        return -1;
    }

    if ( (fin2 = fopen(argv[1], "rt")) == NULL ) {
        printf("읽어들일 파일이 없습니다.\n");
        return -1;
    }

    if ( (fin2 = fopen(argv[2], "rt")) == NULL ) {
        printf("읽어들일 파일이 없습니다.\n");
        return -1;
    }

     if ( (fin2 = fopen(argv[3], "wt")) == NULL ) {
        printf("출력할 파일을 생성할 수 없습니다. \n");
        return -1;
    }


    while (!feof(fin1) || !feof(fin2))
    {
        if (!feof(fin1)) {
            fgets(src1, 80, fin1);
            fputs(src1, fout);
        }

        if (!feof(fin2)) {
            fgets(src1, 80, fin1);
            fputs(src1, fout);
        }
    }

    fclose(fin1);
    fclose(fin2);
    fclose(fout);

    return 0;
}