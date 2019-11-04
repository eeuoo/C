#include <stdio.h>

int main(void)
{
    FILE *fp;
    int i;

    if (fp = fopen("ascii.txt", "w") == NULL) {
        printf("새로운 파일을 생성할 수 없습니다.");
        return -1;
    }

    printf("ASCII 테이블을 작성합니다.");

    for (i = 1; i < 128; i++) {
        if (i % 10 == 0)  // 제어변수 i가 10의 배수이면 fputc() 함수를 사용하여 줄바꿈 실행
            fputc('\n', fp);

        fputc(i, fp);  // fputc() 함수를 사용하여 i값을 저장
        fputc('\t', fp);
    }

    fclose(fp);

    return 0;
}