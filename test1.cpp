#include <stdio.h>

int main(void)
{
    float a = 0, b = 0, c = 0, d = 0, e = 0;

    printf("�Ǽ��� �Է��ϼ��� : ");
    scanf("%f", &a);
    printf("�Ǽ��� �Է��ϼ��� : ");
    scanf("%f", &b);
    printf("�Ǽ��� �Է��ϼ��� : ");
    scanf("%f", &c);

    printf("%f %f %f \n", a, b, c);

    d = a + b + c;
    e = d / 3;

    printf("�հ� : %f  ��� : %f", d, e);

    return 0;
}