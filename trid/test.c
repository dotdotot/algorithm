#include <stdio.h>

// 왼쪽 직각삼각형
void left_RightTriangle(int line)
{
    printf("왼쪽 직각삼각형 출력 \n");
    for (int i = 0; i < line; i++)
    {
        for (int ii = 0; ii <= i; ii++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}

// 오른쪽 직각삼각형
void right_RightTriangle(int line)
{
    printf("오른쪽 직각삼각형 출력 \n");
    for (int i = 0; i < line; i++)
    {
        for (int ii = 0; ii < line - (i + 1); ii++)
        {
            printf(" ");
        }

        for (int ii = 0; ii <= i; ii++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}

// 정삼각형
void equilateralTriangle(int line)
{
    printf("정삼각형 출력 \n");
    for (int i = 0; i < line; i++)
    {
        for (int ii = 0; ii < line - (i + 1); ii++)
        {
            printf(" ");
        }

        for (int ii = 0; ii < (i * 2 + 1); ii++)
        {
            printf("*");
        }
        printf("\n");
    }
}

// 모래시계
void hourglass(int line)
{
    printf("모래시계 출력 \n");
    for (int i = 0; i < line; i++)
    {
        if (i == (line - 1))
            break;

        for (int ii = 0; ii < i; ii++)
        {
            printf(" ");
        }

        for (int ii = 0; ii < ((line - i) * 2 - 1); ii++)
        {

            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < line; i++)
    {
        for (int ii = 0; ii < line - (i + 1); ii++)
        {
            printf(" ");
        }

        for (int ii = 0; ii < (i * 2 + 1); ii++)
        {
            printf("*");
        }
        printf("\n");
    }
}

// 바람개비
void windmill(int line)
{
    printf("바람개비 출력 \n");
    for (int i = 0; i < line; i++)
    {
        for (int ii = 0; ii <= i; ii++)
        {
            printf("*");
        }

        for (int ii = 0; ii < line - i - 1; ii++)
        {
            printf(" ");
        }
        printf(" ");

        for (int ii = 0; ii <= line - i - 1; ii++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < line; i++)
    {
        printf(" ");
        for (int ii = 0; ii < line - (i + 1); ii++)
        {
            printf(" ");
        }

        for (int ii = 0; ii <= i; ii++)
        {
            printf("*");
        }

        printf(" ");

        for (int ii = 0; ii < i; ii++)
        {
            printf(" ");
        }
        for(int ii = 0; ii< line-i;ii++){
            printf("*");
        }
        
        printf("\n");
    }
    printf("\n");
}

int main(void)
{
    
    int comm = 0;
    while (1)
    {
        int line = 0;
        printf("1.왼직각삼각형 2.오직각삼각형 3.정삼각형 4.모래시계 5.바람개비 0.종료 : ");
        scanf("%d", &comm);

        if (comm == 0)
        {
            printf("프로그램 종료\n");
            break;
        }
        else
        {
            printf("몇줄을 출력할까요? : ");
            scanf("%d", &line);
        }
        switch (comm)
        {
        case 1:
            left_RightTriangle(line);
            break;
        case 2:
            right_RightTriangle(line);
            break;
        case 3:
            equilateralTriangle(line);
            break;
        case 4:
            hourglass(line);
            break;
        case 5:
            windmill(line);
            break;
        default:
            break;
        }

        if (comm == 0)
        {
            printf("프로그램 종료\n");
            break;
        }
    }

    return 0;
}