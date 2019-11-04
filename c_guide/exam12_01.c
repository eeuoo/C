#include <stdio.h>

int main()
{
    FILE *fp;   // 파일 포인터 fp 선언
    
    if ( (fp = fopen("exam12_01.c", "r")) == NULL ) {
        printf("파일이 없습니다.");
        return -1;
    }

    // feof() 함수를 사용하여 파일의 끝인지를 검사
    while (!feof(fp))
        printf("%c", fgetc(fp));   // 파일로부터 문자를 읽어서 화면에 출력

    fclose(fp);   // 오픈한 파일을 닫는다
    return 1;
}