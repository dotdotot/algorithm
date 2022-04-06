#include <stdio.h>

int main(void){
    int firstNum;
    int secondNum;
    int tmp;

    printf("변수1의 값 : ");
    scanf("%d",&firstNum);
    printf("변수2의 값 : ");
    scanf("%d",&secondNum);

    tmp = firstNum;
    firstNum = secondNum;
    secondNum = tmp;

    printf("----------------\n");
    printf("변수1의 값 : %d\n",firstNum);
    printf("변수2의 값 : %d\n",secondNum);

    return 0;
}