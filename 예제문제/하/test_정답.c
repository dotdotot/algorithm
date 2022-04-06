#include <stdio.h>

int main(){
    int firstNum;
    int secondNum;
    int result;

    printf("첫번째 숫자를 입력하세요 : ");
    scanf("%d", &firstNum);
    printf("두번째 숫자를 입력하세요 : ");
    scanf("%d", &secondNum);

    result = firstNum + secondNum;

    printf("두수의 합 : %d", result);
}