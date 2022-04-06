#include <stdio.h>

int main(){
    int firstNum;
    int secondNum;

    printf("변수1의 값 : ");
    scanf("%d",&firstNum);
    printf("변수2의 값 : ");
    scanf("%d",&secondNum);

    printf("%d + %d = %d\n",firstNum,secondNum,firstNum+secondNum);
    printf("%d - %d = %d\n",firstNum,secondNum,firstNum-secondNum);
    printf("%d * %d = %d\n",firstNum,secondNum,firstNum*secondNum);
    printf("%d / %d = %d\n",firstNum,secondNum,firstNum/secondNum);
    printf("%d %% %d = %d\n",firstNum,secondNum,firstNum%secondNum);
    return 0;
}