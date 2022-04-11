// 세 정수를 입력받고 합과 평균 출력

#include <stdio.h>

int main(void)
{
    int one,two,three;
    scanf("%d %d %d", &one, &two, &three);

    int sum = one + two + three;
    double avg = sum / 3.0;

    printf("합 : %d \n평균 : %lf",sum,avg);
    
    return 0;
}