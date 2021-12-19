#include <stdio.h>

int main(void)
{
    float a = 0, b = 0, c = 0, d = 0, e = 0;

    printf("실수를 입력하세요 : ");
    scanf("%f", &a);
    printf("실수를 입력하세요 : ");
    scanf("%f", &b);
    printf("실수를 입력하세요 : ");
    scanf("%f", &c);

    printf("%f %f %f \n", a, b, c);

    d = a + b + c;
    e = d / 3;

    printf("합계 : %f  평균 : %f", d, e);

    return 0;
}