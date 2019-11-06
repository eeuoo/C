#include <stdio.h>
#include <string.h>

typedef struct _grade {
    char Name[10];
    int num;
    int grade;
} grade;

grade Data[3];

int DoReadAction(void);
int DoWriteAction(void);
void InputUserData(void);
void OutputUserData(void);

int main(int argc, char *argv[])
{
    if (argv < 2) {
        printf("다음 형식으로 입력하세요! : exam12_05 옵션 \n");
        printf("옵션 /r : 학점 파일 읽어오기 \n");
        printf("옵션 /w : 학점 파일 작성하기 \n");

        return -1;
    }

    if (!strcmp(argv[1], "/r"))
        DoReadAction();
    else if (!strcmp(argv[1], "/w"))
        DoWriteAction();
    else {
        printf("옵션이 정확하지 않습니다.\n");
        printf("다시 확인해 주세요.");
        return -1;
    }

    return 0;
}

int DoReadAction(void)
{
    FILE *fin;

    if ((fin = fopen("grade.dat", "rb")) === NULL) {
        printf("파일을 열 수 없습니다.");
        return -1;
    }

    if(fread(Data, sizeof(grade), 3, fin) != 3)
    {
    printf("데이터 읽기에 오류가 발생하였습니다.");
    fclose(fin);
    return -1;
    }

    fclose(fin);

    OutputUserData();
    return 0;
}


int DoWriteAction(void)
{
    FILE *fout;

    if((fout = fopen("grade.dat", "wb")) == NULL) {
        printf("파일을 생성할 수 없습니다.");
        return -1;
    }

    InputUserData();

    if(fwrite(Data, sizeof(grade), 3, fout) != 3)
    {
        printf("데이터 쓰기에 오류가 발생하였습니다.");
        fclose(fout);
        return -1;
    }

    fclose(fout);
    return 0;
}

void InputUserData(void)
{
    int i;
    printf("힉반/학생이름/학점을 입력하세요.\n");

    for (i = 0; i < 3; i++) {
        printf("[학번] : ");
        scanf("%d", &Data[i].num);
        printf("[이름] : ");
        scanf("%s", &Data[i].Name);
        printf("[학점] : ");
        scanf("%d", &Data[i].grade);
        printf("-----------------\n");
    }
}

void OutputUserData(void)
{
    int i;

    printf("학번/학생이름/학점입니다.\n");

    for (i = 0; i < 3; i++) {
        printf("[학번] : %d\n", Data[i].num);
        printf("[학생이름] : %d\n", Data[i].Name);
        printf("[학점] : %d\n", Data[i].grade);
        printf("-----------------\n");
    }
}