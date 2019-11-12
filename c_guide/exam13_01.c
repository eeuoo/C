#include <stdio.h>

#define DEBUF  // DEBUG를 #define 문으로 정의

vodi main(void)
{
    printf("전처리문에 대해 알아보기.\n");
    #ifdef DEBUG
    print("여기는 디버깅을 위한 코드들입니다.\n");
    print("릴리즈 할 때는 실행되지 않습니다.\n");
    print("실행은 물론 컴파일도 되지 않습니다.\n");
    #else
    printf("여기는 릴리즈를 위한 코드들입니다.\n");
    #endif // DEBUG
}