#include <stdio.h>

int main(void){
    int firstNum;
    int secondNum;
    int tmp;

    printf("����1�� �� : ");
    scanf("%d",&firstNum);
    printf("����2�� �� : ");
    scanf("%d",&secondNum);

    tmp = firstNum;
    firstNum = secondNum;
    secondNum = tmp;

    int n = 10;
    printf("----------------\n");
    printf("%d \n",n = (4,5));
    printf("����2�� �� : %d\n",secondNum);

    return 0;
}