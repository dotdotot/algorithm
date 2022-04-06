#include <stdio.h>

int main(void)
{
    int firstNum;
    int secondNum;
    int resultNum1;
    int resultNum2;
    int resultNum3;
    int result;

    printf("변수1의 값 : ");
    scanf("%d", &firstNum);
    printf("변수2의 값 : ");
    scanf("%d", &secondNum);

    resultNum1 = firstNum * (secondNum % 10);
    resultNum2 = firstNum * (secondNum % 100 - (secondNum % 10));
    resultNum3 = firstNum * (secondNum % 1000 - (secondNum % 10) - (secondNum % 100 - (secondNum % 10)));
    result = resultNum1 + resultNum2 + resultNum3;

    printf("첫번째 결과값 : %d\n", resultNum1);
    printf("두번째 결과값 : %d\n", resultNum2 / 10);
    printf("세번째 결과값 : %d\n", resultNum3 / 100);
    printf("결과값 : %d\n", result);
    return 0;
}