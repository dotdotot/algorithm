#include <stdio.h>

int main(){
    // double�� float�� ���氡�� 
    // ����� ���������� %lf�� %f�� �����ؾ���
    double radius;
    double area;

    printf("������ : ");
    scanf("%lf",&radius);

    area = 3.14*radius*radius;

    printf("���� ���� : %lf\n", area);
    

    return 0;
}