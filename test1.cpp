#include <stdio.h>

int main(void)
{
    char a;
    printf("문자를 입력하시오");
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