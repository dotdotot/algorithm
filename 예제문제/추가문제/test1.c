// 9!의 값을 계산하시오

#include <stdio.h>

// 짝수 1 홀수 0 출력 

int main(void)
{
    int num;
    int result;
    scanf("%d",&num);
    
    result = num %2;

    printf("%d",result);
    
    return 0;
}