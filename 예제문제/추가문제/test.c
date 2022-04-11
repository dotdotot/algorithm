// 9!의 값을 계산하시오

#include <stdio.h>

int main(void)
{
    int num = 9;
    int result = num;

    result = result * (num - 1);
    num = num - 1;

    result = result * (num - 1);
    num = num - 1;

    result = result * (num - 1);
    num = num - 1;

    result = result * (num - 1);
    num = num - 1;

    result = result * (num - 1);
    num = num - 1;

    result = result * (num - 1);
    num = num - 1;

    result = result * (num - 1);
    num = num - 1;

    result = result * (num - 1);
    num = num - 1;

    printf("%d\n", result);
    

    // int num1 = 9;
    // int result1 = num1 * (num1 - 1) * (num1 - 2) * (num1 - 3) * (num1 - 4) * (num1 - 5) * (num1 - 6) * (num1 - 7) * (num1 - 8);
    // printf("%d\n", result1);
    
    return 0;
}