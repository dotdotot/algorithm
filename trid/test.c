#include <stdio.h>

// ���� �����ﰢ��
void left_RightTriangle(int line)
{
    printf("���� �����ﰢ�� ��� \n");
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

// ������ �����ﰢ��
void right_RightTriangle(int line)
{
    printf("������ �����ﰢ�� ��� \n");
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

// ���ﰢ��
void equilateralTriangle(int line)
{
    printf("���ﰢ�� ��� \n");
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

// �𷡽ð�
void hourglass(int line)
{
    printf("�𷡽ð� ��� \n");
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

// �ٶ�����
void windmill(int line)
{
    printf("�ٶ����� ��� \n");
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
        printf("1.�������ﰢ�� 2.�������ﰢ�� 3.���ﰢ�� 4.�𷡽ð� 5.�ٶ����� 0.���� : ");
        scanf("%d", &comm);

        if (comm == 0)
        {
            printf("���α׷� ����\n");
            break;
        }
        else
        {
            printf("������ ����ұ��? : ");
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
            printf("���α׷� ����\n");
            break;
        }
    }

    return 0;
}