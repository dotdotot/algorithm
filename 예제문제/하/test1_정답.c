#include <stdio.h>

int main(){
    // double을 float로 변경가능 
    // 변경시 형식지정자 %lf는 %f로 변경해야함
    double radius;
    double area;

    printf("반지름 : ");
    scanf("%lf",&radius);

    area = 3.14*radius*radius;

    printf("원의 면적 : %lf\n", area);
    

    return 0;
}