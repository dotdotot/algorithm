// �� ������ �Է¹ް� �հ� ��� ���

#include <stdio.h>

int main(void)
{
    int one,two,three;
    scanf("%d %d %d", &one, &two, &three);

    int sum = one + two + three;
    double avg = sum / 3.0;

    printf("�� : %d \n��� : %lf",sum,avg);
    
    return 0;
}