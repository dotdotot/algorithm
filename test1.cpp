#include <stdio.h>

int main(void)
{
    char a;
    printf("���ڸ� �Է��Ͻÿ�");
    scanf("%c", &a);
    if (a == 'C')
        printf("Circle");
    else if (a == 'R')
        printf("Rectangle");
    else if (a == 'T')
        printf("Triangle");
    else
        printf("Unknown");
    return 0;
}