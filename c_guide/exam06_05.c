#include <stdio.h>

int main()
{
    char grade;

    printf("여러분이 받은 학점을 입력하세요.\n");
    printf("나의 학점 : ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'a':
    case 'A':
        printf("100점 >= 나의 성적 >= 90점");
        break;

    case 'b':
    case 'B':
        printf("90점 >= 나의 성적 >= 80점");
        break;
    
    case 'c':
    case 'C':
        printf("80점 >= 나의 성적 >= 70점");
        break;

    case 'd':
    case 'D':
        printf("70점 >= 나의 성적 >= 60점");
        break;

    default:
        printf("나의 성적은 60점 이하");
        break;
    }

    return 0;
}