#include <stdio.h>

// 명령어 행을 통한 인수 전달
int main(int argc, char *argv[])
{
    FILE *fin, *fout;

    // 실행 파일 이름과 원본 파일 이름, 그리고 복사 파일 이름이 입력되었는지 검사
    if (argc < 3) {
        printf("다음 형식으로 입력하세요! : exam12_03 원본_파일 복사_파일");
        return -1;
    }

    // 원본 파일을 텍스트 모드 읽기용으로 연다.
    if ( (fin = fopen(argv[1], "r")) == NULL ) {
        printf("원본 파일을 열 수 없습니다.");
        return -1;
    }

    // 복사 파일을 텍스트 모드 쓰기용으로 연다.
    if ( (fout = fopen(argv[2], "w")) == NULL ) {
        printf("복사 파일을 열 수 없습니다.");
        return -1;
    }

    // 원본 파일을 끝까지 읽어서 복사 파일에 기록.
    while (!feof(fin))
        fputc(fgetc(fin), fout);
    
    // 두 개의 파일 포인터를 닫는다.
    fclose(fin);
    fclose(fout);

    return 0;
}