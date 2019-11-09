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

    if ( (fin2 = fopen(argv[2], "rt")) == NULL ) {
        printf("읽어들일 파일이 없습니다.\n");
        return -1;
    }
}